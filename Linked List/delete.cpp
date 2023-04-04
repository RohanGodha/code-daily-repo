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
    cout << "\nTotal Elements: " << count<<endl;
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
node *deleteNode(node *head,int key)
{
    node *prev,*temp;
    temp=head;
    if(temp->data==key && temp!=NULL)
    {
        head=temp->next;
        free(temp);
        return head;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) return head;

    prev->next=temp->next;
    free(temp);
    return head;

}

int main()
{
    node *head = NULL;
    printList(head);
    // int option, insert, prevElem, pos;
    // label:
    cout << "\n\nChoose The Operation:\n1. Insert at head\n2. Insert after an element\n3. Insert at the end\n4. Insert at middle\n\nOption Selected: ";
        cout << "\nEnter the insertion data: ";
        // cin >> insert;
        head = pushAtHead(head, 5);
        head = pushAtHead(head, 10);
        head = pushAtHead(head, 15);
        head = pushAtHead(head, 20);
        head = pushAtHead(head, 25);
        head = pushAtHead(head, 30);
        printList(head);
        head = deleteNode(head, 15);
        printList(head);
        head = deleteNode(head, 10);
        printList(head);
        // goto label;
        // break;

    return 0;
}