//printing only non-repeated elements
#include<stdio.h>
int main()
{
int a[6]={1,2,3,4},i,j,n,k,p,e;
printf("enter the elements \n");
n=sizeof a/sizeof a[0];
//for(i=0;i<n;i++)
//scanf("%d",a+i);
printf("enter the pos and element\n");
scanf("%d %d",&p,&e);
for(i=n-2;i>=p;i--)
	{
	a[i+1]=a[i];
	a[p]=e;
	}
printf("new array\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
}
	
