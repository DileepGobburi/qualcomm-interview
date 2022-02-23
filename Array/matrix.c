#include<stdio.h>
void matrix(int a[3][3])
{ 
int i,j;
for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
				{
				scanf("%d",&a[i][j]);
				}
		}
}
void display(int d[3][3])
{
int i,j;
for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
				{
				printf("%d",d[i][j]);
				}
				printf("\n");
		}
}	
			

int main()
{
	int a[3][3],b[3][3],d[3][3],i,j,k;
	printf("enter the elements\n");
	matrix(a);
	printf("enter the elements\n");
	matrix(b);
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
				d[i][j]=a[i][j]+b[i][j];
				}
			
		}
	printf("print the final matrix\n");
	display(d);
}

