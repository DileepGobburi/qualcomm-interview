#include<stdio.h>
int main()
{
	int n,pos,i;
	printf("enter n and pos\n");
	scanf(" %d %d",&n,&pos);
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\n");
	n=n^(1<<pos);
printf("after toggle\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
}


