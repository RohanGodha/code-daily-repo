#include <iostream>
#include <unordered_map>
using namespace std;
struct listNode {
    int data;
    listNode *next;
    void printList(listNode *n)
    {
        while(n!=NULL)
        {
            cout<<n->data<<endl;
            n=n->next;
        }
    }
};
    listNode *push(listNode *head,int newdata)
    {
        listNode *newNode=new listNode();
        newNode->data=newdata;
        newNode->next=head;
        head= newNode;
        return head;

    } 

int main()
{
    listNode *head = NULL;
    push(head,15);
    push(head,16);
    
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
