#include <iostream>
using namespace std;

struct treeNode
{
    int data;
    treeNode *left = NULL, *right = NULL;
};

treeNode *insertNode(int data)
{
    // treeNode node = new treeNode();
    treeNode *node = new treeNode();
    node->data = data;
    return node;
}

void printTree(treeNode *n)
{
    if (n == NULL)
    {
        return;
    }

    cout << n->data << " "; // Print the data in the current node
    printTree(n->left);
    printTree(n->right);
}

int main()
{
    treeNode *root = insertNode(1);
    root->left = insertNode(2);
    root->left->left = insertNode(3);
    root->left->left->left = insertNode(8);
    root->left->left->right = insertNode(9);
    root->left->right = insertNode(4);
    root->left->right->right = insertNode(10);
    root->left->right->right = insertNode(11);

    root->right = insertNode(5);
    root->left->left = insertNode(12);
    root->left->left->left = insertNode(12);
    root->left->left->right = insertNode(14);
    root->left->right = insertNode(15);
    root->left->right->right = insertNode(16);
    root->left->right->right = insertNode(17);
    cout << "Tree Printed" << endl;
    printTree(root);
}