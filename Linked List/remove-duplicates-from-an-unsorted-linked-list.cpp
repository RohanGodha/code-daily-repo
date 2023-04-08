//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
class Solution
{
    public:
    
    Node* removeDuplicates(Node* head)
    {
        unordered_set<int> seen; //make unorder set
        Node *curr=head;
        if(curr==NULL || curr->next==NULL) return head;
        else 
        seen.insert(curr->data);
        while(curr!=NULL && curr->next!=NULL)
        {
            if(seen.find(curr->next->data)!=seen.end()) curr->next=curr->next->next;
            else
            {seen.insert(curr->next->data);
            curr=curr->next;
            }
        }
        return head;
    }
};

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
