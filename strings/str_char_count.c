//how many times each char present
#include<stdio.h>
#include<string.h>
void main()
{
 char s[100];
 int i,j,count=0;
 printf("enter the string\n");
 scanf("%s",s);
 int n=strlen(s);
 for(i=0;i<n;i++)
 	{
 		count=1;
 		if(s[i])
 		{
 			for(j=i+1;j<n;j++)
 			{
 				if(s[i]==s[j])
 				{
 				count++;
 	 			s[j]='\0';
 	 			}
 	 		}
 	 	printf("the char %c is present %d times\n",s[i],count);
 	 	}
 	 }
 }
