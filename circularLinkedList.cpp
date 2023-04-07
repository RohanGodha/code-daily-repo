#include <iostream>
using namespace std;

//Linked list Node
struct node{
    int data;
    node *next;
};

void printList (node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    cout<<"No. of element in linked list is : "<<count<<endl;
}

void printCircularList(node *head)
{
    node *temp=head;
    if(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        while(temp!=head)
        {
        cout<<temp->data<<endl;
        temp=temp->next;
        }
    }
}

int main(){
    
//    /*                   Make A linked List                            */
    node *head  = new node(); node *second = new node(); node *third = new node();
    node *four  = new node(); node *five = new node(); node *six = new node();
    node *seven  = new node(); node *eight = new node(); node *nine = new node();

    head -> data = 5;   head -> next = second;
    second->data = 1;   second ->next = third;
    third -> data = -3; third ->next = four;
    four -> data = 11;  four -> next = five;
    five->data = 10;    five ->next = six;
    six -> data = 2;    six ->next = seven;
    seven -> data = 7;  seven -> next = eight;
    eight->data = 9;    eight ->next = nine;
    nine -> data = 18;  nine ->next = head;

    printCircularList(four);
}