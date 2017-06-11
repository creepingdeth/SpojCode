#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
struct node* newnode(int data)
{
  struct node* node=new struct node;
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return (node);

}
int identicaltree(struct node* a,struct node* b)
{
    if(a==NULL && b==NULL)
        return 1;
    if(a!=NULL && b!=NULL)
        {return
        (a->data == b->data && identicaltree(a->left,b->left)&& identicaltree(a->right,b->right));

}
return 0;
}
int main()
{
  struct node *root1=newnode(1);
  struct node *root2=newnode(2);
  root1->left = newnode(2);
    root1->right = newnode(3);
    root1->left->left  = newnode(4);
    root1->left->right = newnode(5);

    root2->left = newnode(2);
    root2->right = newnode(3);
    root2->left->left = newnode(4);
    root2->left->right = newnode(5);

    if(identicaltree(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");

  return 0;
}
