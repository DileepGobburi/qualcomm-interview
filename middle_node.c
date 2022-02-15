#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *next;
	};
struct node *head=NULL;
struct node *last=NULL;
void detect(struct node **head)
{
	struct node *cn=*head;
	struct node *nn=*head;
	while(nn!=NULL && nn->next!=NULL)
	{
		nn=nn->next->next;
		cn=cn->next;	
	}
	printf("middle node %d\n",cn->data);

}
void create(struct node **head,int ele)
{
	struct node *new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=ele;
	new->next=NULL;
	if(*head==NULL)
	{
	*head=last=new;
	}
	else
	{
	last->next=new;
	last=new;
	}
}
int main()
{
	create(&head,1);
	create(&head,2);
	create(&head,3);
	create(&head,4);
	create(&head,5);
	create(&head,6);
	create(&head,7);
	create(&head,8);
	//head->next->next->next->next=head->next;
	detect(&head);
}
