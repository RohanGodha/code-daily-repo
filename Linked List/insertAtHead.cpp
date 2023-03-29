#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct listNode {
    int data;
    listNode *next;
};
listNode *push(listNode *head,int newdata)
    {
        listNode *newNode=new listNode();
        newNode->data=newdata;
        newNode->next=head;
        head= newNode;
        return head;
    } 
 void printList(listNode *n)
    {
        while(n!=NULL)
        {
            cout<<n->data<<endl;
            n=n->next;
        }
    }
int main()
{
    listNode *head = NULL;
    head= push(head,15);
    head= push(head,16);
    printList(head);
    
    // listNode *second = new listNode();
    // listNode *third = new listNode();

    // head->data=14;
    // head->next=second;

    // head->data=15;
    // head->next=third;

    // head->data=16;
    // head->next=NULL;

    return 0;
}
