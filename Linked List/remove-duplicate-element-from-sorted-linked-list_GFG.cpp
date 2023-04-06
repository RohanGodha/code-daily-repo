

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node* removeDuplicates(Node *head)
{
    Node *curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
    return head;
}

// Node *removeDuplicates(Node *head)
// {
//     // Node *curr=head;
//     // Node *agla=curr->next;
//     // while(agla!=NULL)
//     // {
//     //     if(curr->data==agla->data)
//     //     {
//     //         Node *temp=curr;
//     //         curr->data=curr->next->data;
//     //         curr->next=curr->next->next;
//     //         free(temp);
//     //     }
//     //     curr=curr->next;
//     //     agla=agla->next;
//     // }
//     // return head;
// }