//Adding the elements in the end of tree
#include<stdio.h>
#include<stdlib.h>
struct node
	{
 		int data;
 		struct node *right;
 		struct node *left;
 	}*root,*temp;
 void binarytree();
 void next(struct node*);
 void inorder(struct node*);
int main()
{
 tree();
}

 void tree()
 {
 		printf("in tree \n");
 		binarytree();
 		inorder(root);
 }
 void binarytree()
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data = rand();
	temp->left = NULL;
	temp->right= NULL;
	if(root==NULL)
		root=temp;
	else
		next(root);
}
void next(struct node* ptr)
{
	if((temp->data > ptr->data) && (ptr->right!=NULL)) 
		next(ptr->right);
	else if((temp->data > ptr->data) && (ptr->right==NULL))
		ptr->right=temp;
else if((temp->data < ptr->data) && (ptr->left!=NULL))
		next(ptr->left);
	else if((temp->data < ptr->data) && (ptr->left==NULL))
		ptr->left=temp;

}
void inorder(struct node* ptr)
{	
if(ptr!=0)
	{
	
		inorder(ptr->left);
	
	printf(" %d ", ptr->data);
	
		inorder(ptr->right);
	}
}

