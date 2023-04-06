// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct listNode {
    int data;
    listNode *next;
};
void printList(listNode *n)
    {
        while(n!=NULL)
        {
            cout<<n->data<<endl;
            n=n->next;
        }
    }
void printRecursive(listNode *head)
{
    // listNode* curr=head;
    if(head!=NULL) return;
    cout<<"\n"<<head->data<<endl;
    printRecursive(head=head->next);

}

listNode *pusher(listNode *head, int newData)
    {
        listNode *newNode=new listNode();
        newNode->data=newData;
        newNode->next=head;
        head=newNode;
        return head;
    }
int main()
{
    listNode *head=NULL;
    int num;
    cout<<"How many do you want to add?"<<endl;
    cin>>num;
    cout<<"Enter the numbers"<<endl;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        int newData=arr[i];
        head=pusher(head,newData);
    }
    printList(head);
    printRecursive(head);
    return 0;
}