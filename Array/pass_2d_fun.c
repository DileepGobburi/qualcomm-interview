//passing 2d array to a function
#include<stdio.h>
void fun(int r,int c,int *p);
int main()
{
int a[3][3],i,j,r,c;
printf("enter the elements\n");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
r=sizeof a/sizeof a[0];
c=sizeof a[0]/sizeof a[0][0];
fun(r,c,a);
}
//void fun(int r,int c,int(*p)[c])
void fun(int r,int c,int *p)
{
int i,j;
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		//printf("%d",p[i][j]);
		printf("%d",*p++);
		printf("\n");
	}	
}

