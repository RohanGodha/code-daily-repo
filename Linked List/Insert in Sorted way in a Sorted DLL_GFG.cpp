Node* sortedInsert(Node * head, int x)
{
    // Code here
    Node* pre=NULL;
    Node* curr=head;
    Node* newNode=getNode(x);
    
    if(curr->data>x) //insert a node in first place
    {               
        newNode->next=curr;
        curr->prev=newNode;
        return newNode;
    }
    

    while(curr!=NULL)//insert a node  between two nodes
    {
        if(curr->data>x)
        {
            newNode->next=pre->next;
            pre->next=newNode;
            newNode->prev=curr->prev;
            curr->prev=newNode;
            return head;
        }
        
        pre=curr;
        curr=curr->next;
    }
    
    pre->next=newNode;  //insert a node between last node
    newNode->prev=pre;
    
    return head;
}