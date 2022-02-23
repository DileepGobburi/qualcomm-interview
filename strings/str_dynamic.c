//Allocating memory for n strings dynamically
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,n;
 printf("enter n no.of strings\n");
 scanf("%d",&n);
 char **p=(char**)malloc(n*sizeof(char*));
 for(i=0;i<n;i++)
 p[i]=(char*)malloc(10*sizeof(char));
 printf("enter the input strings\n");
 for(i=0;i<n;i++)
 scanf("%s",p[i]);
 printf("printing %d strings\n",n);
 for(i=0;i<n;i++)
 printf("%s\n",p[i]);
 for(i=0;i<n;i++)
 free(p[i]);
// free(p);
}
 
