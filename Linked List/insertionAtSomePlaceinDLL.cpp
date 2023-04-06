#include <iostream>
using namespace std;

/* ----- Linked list Node  ------ */
struct node{
    int data;
    node *next;
    node *prev;
};

void printList(node *head)
{
    while(head!=NULL)
    {
        cout<<"\n"<<head->data;
        head=head->next;
    }
}

node *pushAtHead(node *head, int newData)
{
    node *newNode=new node();
    newNode->data=newData;
    newNode->next=head;
    newNode->prev=NULL;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    head=newNode;
    return head;
}

node *pushAfterData(node *head, int newData, int after)
{
    node *newNode=new node();
    node *curr=head;
    newNode->data=newData;
    while(curr!=NULL && curr->data!=after)
    {
        curr=curr->next;
    }
    if(curr->data==after && curr!=NULL)
    {
        newNode->next=curr->next;
        newNode->prev=curr;
        if(curr->next==NULL)
        {
            curr->next->prev=newNode;
        }
            curr->next=newNode;

    }
    return head;
}

int main()
{
   node *head=NULL;
   head= pushAtHead(head,10);
   head= pushAtHead(head,20);
   head= pushAtHead(head,30);
   head= pushAtHead(head,40);
   head= pushAtHead(head,60);
   head= pushAtHead(head,70);
   printList(head);
   cout<<"\nChange\n"<<endl;
   head= pushAfterData(head,50,60);
   printList(head);
}