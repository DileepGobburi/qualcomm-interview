//printing only non-repeated elements
#include<stdio.h>
int main()
{
int a[5],i,j,n,k;
printf("enter the elements \n");
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
	scanf("%d",a+i);
for(i=0;i<n;i++)
{
	 for(j=0;j<i;j++)
	 {
	 	if(a[i]==a[j])
	 	break;
	 }
	 if(j!=i)
	 continue;
	 for(j=i+1;j<n;j++)
	 {
	 if(a[i]==a[j])
	 break;
	 }
	 	if(j==n)
	 	printf(" %d",a[i]);
	 	
}
printf("\n");
}	 	


