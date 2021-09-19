#include<stdio.h>
int main()
{
	int n,i,count=0;
		printf("enter the n \n");
	scanf("%d",&n);
while(n){
	n=n&(n-1);
	count++;
}
printf("no.of set bits %d\n",count);
}

