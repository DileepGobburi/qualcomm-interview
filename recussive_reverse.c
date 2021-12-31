//reverse the linked list in the recurssive function

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void recurssive(struct node *head,struct node **ref)
{
    struct node *first;
    struct node *last;
     if (head == NULL) { //checking the list empty case
        return;
    }
 
    first = head; 
    last = first->next; 
    if (last == NULL)//list had only one node
    {
                      // fix the head pointer here
        *ref = first;
        return;
    }
    recurssive(last,ref);
    //first element at the end
    last->next = first;
    first->next = NULL;
}
void reverse(struct node **head)
{
    recurssive(*head,head);
}
void create(struct node **head,struct node **last,int ele)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=ele;
    new->next=NULL;
    if((*head)==NULL)
    {
        (*head)=(*last)=new;
    }
    else
    {
        (*last)->next=new;
        (*last)=new;
    }
    
}
void display(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
    }
}
int main()
{
    struct node *head=NULL;
    struct node *last=NULL;
    create(&head,&last,11);
    create(&head,&last,22);
    create(&head,&last,32);
    display(head);
    reverse(&head);
printf("after reverse\n");
    display(head);

}

