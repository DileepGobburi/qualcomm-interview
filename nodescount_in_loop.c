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
int count=0;
	struct node *cn=*head;
	struct node *nn=*head;
	while(cn!=NULL && nn!=NULL && nn->next!=NULL)
	{
		cn=cn->next;
		count++;
		nn=nn->next->next;
		if(cn==nn)
		{
		printf("loop is detected\n");
		break;
		}
	}
	printf("no.of nodes in the loop are %d\n",count);

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
	head->next->next->next->next=head->next;
	detect(&head);
}
