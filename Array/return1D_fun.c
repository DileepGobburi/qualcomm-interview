//returning 1D array from a function
/*#include<stdio.h>
int n;
int *fun()
{
static int a[]={1,2,3,4,5,6,7,8};
n = sizeof a/sizeof a[0];
return a;
}
int main()
{
int i,*p=fun();
  for(i=0;i<n;i++)
 	printf("%d",p[i]);
 	printf("\n");
 }*/
 //returning 2D array from function
 #include<stdio.h>
int r,c;
int (*fun())[3]
{
static int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
r = sizeof a/sizeof a[0];
c = sizeof a[0]/sizeof a[0][0];
return a;
}
int main()
{
int i,j,(*p)[3]=fun();
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
 	printf("%d",p[i][j]);//printf("%d",(*p)[j]);  p++
 	
 	}
 	printf("\n");
 
   } 
 }
