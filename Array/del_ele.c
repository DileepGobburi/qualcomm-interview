//deleting the particular ele in all occurences
#include<stdio.h>
int main()
{
int a[6],i,j,n,k,p,e;
printf("enter the elements \n");
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
scanf("%d",a+i);
printf("enter the element to delete\n");
scanf("%d",&e);
for(i=0;i<n;i++)
	{
	if(a[i]==e)
	{
	for(j=i;j<n-1;j++)
		a[j]=a[j+1];
		a[n-1]=0;
		i--;
	}
	}
printf("new array\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
}
	
