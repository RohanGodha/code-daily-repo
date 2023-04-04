#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

void printList(node *head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<"\n"<<temp->data<<endl;
        count++;
        temp=temp->next;
    }
    cout<<"\nTotal Elements: "<<count<<endl;
}

node *push(node *head,int newdata)
{
    node *newNode=new node();
    newNode->data=newdata;
    newNode->next=head;
    head=newNode;
    return head;
}
int main()
{
    node *head=NULL;
    printList(head);
    head=push(head,10);
    head=push(head,10);
    head=push(head,10);
    head=push(head,10);
    head=push(head,10);
    printList(head);
    return 0;
}