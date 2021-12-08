//binary tree

#include<stdio.h>
#include<stdlib.h>
 
struct node 
{
int data;
struct node *left,*right;
}node;

struct node *createtree()
{
int item;
struct node *tmp;
tmp = (struct node *)(malloc(sizeof(struct node)));
printf("\n enter the data (insert 0 if no data to be inersted)");
scanf("%d",&item);
if(item == 0) {
return NULL;
}
tmp->data = item;
printf("\n enter the left child of this node:");
tmp->left = createtree();
printf("\n enter the right child of this node:");
tmp->right = createtree();
return tmp;
}

void inorder(struct node *t)
{
if(t!= NULL)
{
inorder(t->left);
printf(" %d",t->data);
inorder(t->right);
}
}

void preorder(struct node *t)
{
if (t!=NULL)
{
printf(" %d",t->data);
preorder(t->left);
preorder(t->right);
}
}

void postorder(struct node *t)
{
if(t!=NULL){
postorder(t->left);
postorder(t->right);
printf(" %d",t->data);
}
}

void main()
{
struct node *root;
root = createtree();
printf("\n pre order traversal is");
preorder(root);
printf("\n inorder traversal is ");
inorder(root);
printf("\n post prder traversal is");
postorder(root);

}


