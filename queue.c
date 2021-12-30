//to check whether the queue is full or not
#include <stdio.h>
int front=-1,rare=-1,size=10;
int i,queue[10],ele;
void enqueue()
{
    if(rare==size-1)
    printf("overflow");
    else
    {
        scanf("%d",&ele);
        if(front==-1)
        {
            front=0;
        }
    rare++;
    queue[rare]=ele;
    }
}

void dequeue()
{
    if((rare==-1)||(front>rare))
    printf("underflow");
    else
    {
        ele=queue[front];
        printf("%d\n",ele);
        front++;
    }
}

void display()
{
    if((rare==-1)||(front>rare))
    printf("empty queue");
    else
    {
        for(i=front;i<=rare;i++)
        printf("%d\n",queue[i]);
    }
}
int main()
{
    printf("enter the elements in to queue\n");
    enqueue();
    enqueue();
    printf("deleting elements\n");
    dequeue();
    printf("displaying elements\n");
    display();
    
}
