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
 struct node* node=new struct node;
 node->data=data;
 node->left=NULL;
 node->right=NULL;
 return (node);
}
void postorder(struct node* node)
{
    if(node==NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%d",node->data);
}
void inorder(struct node* node)
{
  if(node==NULL)return;
  inorder(node->left);
  printf("%d",node->data);
  inorder(node->right);
}
void preorder(struct node* node)
{
    if (node==NULL)
        return;
    printf("%d",node->data);
    preorder(node->left);
    preorder(node->right);
}
int main()
{
    struct node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    printf("\npreorder traversal of binary tree is  \n");
    preorder(root);
    printf("\n preorder traversal of binary tree is  \n");
    inorder(root);
    printf("\npostorder traversal of binary tree is  \n");
    postorder(root);
    return 0;
}
