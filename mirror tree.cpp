#include<iostream>
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    node* left;
    node* right;
};
struct node* newnode(int data)
{
 struct node* node =new struct node;
 node->data=data;
 node->left=NULL;
 node->right=NULL;
 return (node);
}
void mirror(struct node* node)
{
    if(node==NULL)return;
    else
        {
        struct node* temp;
    mirror(node->left);
    mirror (node->right);
    temp=node->left;
    node->left=node->right;
    node->right=temp;

        }
}
void order(struct node* node)
{
    if (node==NULL)return;
    order(node->left);
    printf("%d",node->data);
    order(node->right);

}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    printf("\n inorder traversal of tree is\n ");
    order(root);
    mirror(root);
    printf("\n inorder traversal of mirror tree is\n ");
    order(root);
    return 0;

}
