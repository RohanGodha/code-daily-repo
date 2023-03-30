#include <bits/stdc++.h>
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
    listNode *pusher(listNode *head, int newData)
    {
        listNode *newNode=new listNode();
        newNode->data=newData;
        newNode->next=head;
        head=newNode;
        return head;
    }
    void insertMiddle(listNode *prev, int newData)
    {
                listNode *newNode=new listNode();
                newNode->data=newData;
                newNode->next=prev->next;
                prev->next=newNode;
                cout<<"Inserted";
                // head=
                // printList(head);
                // break;//
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
    insertMiddle(head->next,10);
    printList(head);

    return 0;
}