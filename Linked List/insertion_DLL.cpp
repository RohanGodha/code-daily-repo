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

node *push(node *head,int newData)
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

int main()
{
   node *head=NULL;
   head= push(head,10);
   head= push(head,20);
   head= push(head,30);
   printList(head);
}