#include<stdio.h>
void modify(int*a)
{
	*a=10;
	a=NULL;
}
int main()
{
	int x=5;
	int *p=&x;
	printf("%p %u\n",p,x);//p=oxffffhh x=5
	modify(p);
	printf("%p %u\n",p,x);//p=0xffffhh x=10
	return 0;
}


