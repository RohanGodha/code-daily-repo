#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;
    return element;
}

void printNode(node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        //  cout<<root->right;
        root = root->left;
    }
    cout << endl;
}

int main()
{
    // make root node
    node *root = newNode(1);

    /*

          1
        /  \
       NULL  NULL
    */

    root->right = newNode(3);

    /*

         1
       /  \
      NULL  3
   */

    root->left = newNode(2);

    /*

         1
       /  \
      2  3
   */

    root->left->left = newNode(4);

    /*

         1
       /  \
      2     3
    /  \
    NULL 4

   */

    printNode(root);

    return 0;
}