#include<stdio.h>
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d", &n);
	(n&(n-1))==0?puts("power of 2"):puts("not power of 2");
}

