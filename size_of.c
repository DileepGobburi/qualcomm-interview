//finding size of a variable without using sizeof operator
#include<stdio.h>
int main()
{
	int x=1;
	int *p=&x;
	int q=++p;
	printf("%d",q-p);
}
