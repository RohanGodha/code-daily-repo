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

node *deleteNode(node *head,int key)
{
    // prev aur temp banaya jisse baad mei store kara jaake sake
    node *prev,*temp;
    // head ko nahi change karte kabhi
    temp=head;
    // agar pehli hi position pe element match hoa gaya
    if(temp->data==key && temp!=NULL)
    {
        head=temp->next;
        free(temp);
        return head;
    }
    // jab tak temp exist karta hai aur usmei key nahi match karti, iterate it
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }

    // agar end take pahuch gaya without matching
    if(temp==NULL) return head;

    // iterate karte karte mil gaya
    prev->next=temp->next;
    free(temp);
    return head;

}

int main()
{
    node *head = NULL;
    printList(head);
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
    return 0;
}