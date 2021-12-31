#include <stdio.h>
#include<stdlib.h>
#include<string.h>
    struct node {
	char a[20];
	int id,sub,marks;
	struct node* next;
};
void create(struct node **head,struct node **last,char *b,int i,int s,int m)
{
    struct node* new
		= (struct node*)malloc(sizeof(struct node));
		    strcpy(new->a,b);
            new->id =i;
            new->sub=s;
            new->marks=m;
            new -> next = NULL;
		if((*head)==NULL)
        {
            (*head)=(*last)=new;
        }
           else{
	                (*last)->next=new;
	                (*last)=new;
           }
        
}
void display(struct node* head)
{
	struct node* temp = head;
	while (temp != NULL) {
		printf("name=%s id=%d no.of sub=%d marks=%d\n ", temp->a,temp->id,temp->sub,temp->marks);
		temp = temp->next;
	}
}
int main()
{
    struct node *head=NULL;
    struct node *last=NULL;
	create(&head,&last,"ram",1,3,275);
	create(&head,&last,"ravi",2,3,298);
	create(&head,&last,"hari",3,3,230);
	display(head);
	//create(&head, 85);
}

