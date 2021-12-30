//finding sizeof a variable without using sizof opertor
#include<stdio.h>
int main()
{
	int x=1;
	int *p=&x;
	int q=++p;
	printf("%d",q-p);

}
