#include <iostream>
using namespace std;

struct tree{
    int data;
    tree *left;
    tree *right;
};

tree *newNode(int data)
{
    tree *element=new tree();
    element->data=data;
    element->left=NULL;
    element->right=NULL;
    return element;
}
int main() 
{
    return 0;
}