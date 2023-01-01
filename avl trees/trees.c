/*
Name: -V D Panduranga Sai Guptha
Sect: -B
Topic: -Implementation of Binary tree traversals techniques:
a. pre-order
b. in-order, and
c. post-order.
*/
#include <stdio.h>
#include <stdlib.h> //standard library
struct node {  //structure to acess the node
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)//function to create new node
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));//memory allocation
    node->data = data; //condition
    node->left = NULL;//condition
    node->right = NULL;//condition

    return (node); //returning node
}
void printPostorder(struct node* node)//function to print the post order of trees
{
    if (node == NULL)
        return;
    printPostorder(node->left);//recurive tool
    printPostorder(node->right);
    printf("%d ", node->data);
}
void printInorder(struct node* node)//function to print inorder of the tree datastructure
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);//calling the printinorder function
}
void printPreorder(struct node* node)//function to print the preorder of the trees
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    printPreorder(node->left);
    printPreorder(node->right);//calling the function into the function
}
int main()
{
    struct node* root = newNode(1);//declaration of ther variable of the type oof the node
    root->left = newNode(2);//condition
    root->right = newNode(3); //condition
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);//parameter tof the function
    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);
    return 0;
}
