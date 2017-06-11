#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
struct node *newnode(int data)
{
    struct node* node =new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int size(struct node* node)
{
    if(node==NULL)
        return 0;
    else
        return (size(node->left)+1+size(node->right));
}
int main()
{
    struct node *root =newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    printf("size of the tree is %d",size(root));
    return 0;
}
