#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

void printList(node *n)
{
    int count = 0;
    while(n != NULL)
    {
       count++; 
       cout << n->data << endl;
       n = n->next;
    }
    cout << "\nTotal Elements: " << count;
}
  
node *pushAtHead(node *head , int newData)
{
   node *newNode = new node();
   newNode->data = newData;
   newNode->next = head;
   head = newNode;
   return head;
}

node* pushAfter(node* head, int newData, int prevEle) {
    node* curr = head;
    while (curr != NULL) {
        if (curr->data == prevEle) {
            node* newNode = new node();
            newNode->data = newData;
            newNode->next = curr->next;
            curr->next = newNode;
            return head;
        }
        curr = curr->next;
    }
    return head;
}

node* insertAtMiddle(node* head, int newData, int pos) {
    node* curr = head;
    int count = 1;
    while (curr != NULL && count < pos) {
        curr = curr->next;
        count++;
    }
    if (curr == NULL) {
        cout << "Invalid position\n";
        return head;
    }
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

node *pushAtEnd(node *head, int newData)
{
    node* curr = head;
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return head;
    }
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

int main()
{
    node *head = NULL;
    printList(head);
    int option, insert, prevElem, pos;
    label:
    cout << "\n\nChoose The Operation:\n1. Insert at head\n2. Insert after an element\n3. Insert at the end\n4. Insert at middle\n\nOption Selected: ";
    cin >> option;
    switch(option){
    
    case 1: 
        cout << "\nEnter the insertion data: ";
        cin >> insert;
        head = pushAtHead(head, insert);
        printList(head);
        goto label;
        break;

    case 2:
        cout << "\nAfter which element do you want to insert?: ";
        cin >> prevElem;
        cout << "\nEnter the insertion data: ";
        cin >> insert;
        head = pushAfter(head, insert, prevElem);
        printList(head);
        goto label;
        break;

    case 3:
        cout << "\nEnter the insertion data: ";
        cin >> insert;
        head = pushAtEnd(head, insert);
        printList(head);
        goto label;
        break;

    case 4:
        cout << "\nEnter the insertion data: ";
        cin >> insert;
        cout << "\nEnter the position to insert: ";
        cin >> pos;
        head = insertAtMiddle(head, insert, pos);
        printList(head);
        goto label;
        break;

    default:
        cout << "\nInvalid option selected. Please try again.\n";
        goto label;
        break;
    }
    return 0;
}