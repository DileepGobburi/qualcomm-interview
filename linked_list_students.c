3. Name, id, num of subjs (can vary student to student) , marks (pointer to store the marks of these subj).
 memory for the record to be dynamially allocated- linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    char a[20];
    int id,sub,marks;
    struct node *link;
}node;
struct node *head=NULL;
struct node *tail=NULL;
void create()
{
  
    printf("enter students details\n");
    struct node *new=(struct node*)malloc(sizeof(struct node));
    scanf("%s %d %d %d",new->a,&new->id,&new->sub,&new->marks);
  
    if(head==NULL)
    {
        head=tail=new;
    }
    else
    {
        tail->link=new;
        tail=new;
    }
}
    
    void display()
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            printf("student details name=%s id=%d sub=%d marks=%d\n",temp->a,temp->id,temp->sub,temp->marks);
            temp=temp->link;
        }
    }
    
    

int main()
{
    create();
    create();
    display();
}
