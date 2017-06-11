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
void dt(struct node* node)
{
    if (node=NULL)return ;
        dt(node->left);
        dt(node->right);
        printf("deleting node %d",node->data);
        free(node);
}
int main()
{
    struct node *root =newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    dt(root);
    root=NULL;
    printf("\n tree has been deleted");
    return 0;
}
