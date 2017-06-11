#include<iostream>
#include<stdio.h>
using namespace std;
struct node

{
    int data;
    node *left;
    node *right;
};
int maxdep(struct node* node)
{
    if(node==NULL)
        return 0;
    else
        {
            int ld=maxdep(node->left);
            int rd=maxdep(node->right);
            if(ld>rd)
                return(ld+1);
            else return (rd+1);
        }
}
struct node* newnode(int data)
{
    struct node* node=new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int main()
         {
          struct node *root =newnode(1);
          root->left=newnode(2);
          root->right=newnode(3);
          root->left->left=newnode(4);
          root->left->right=newnode(5);
          printf("height of tree = %d",maxdep(root));
          return 0;

         }

