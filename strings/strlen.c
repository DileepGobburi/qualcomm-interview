//string length finding with str function
/*
#include<stdio.h>
int main()
{
char s[10];
int i;
printf("enter the string\n");
scanf("%[^\n]s",s);
for(i=0;s[i];i++);
printf("string length %d\n",i);
}
*/

//string copy source to destination
/*
#include<stdio.h>
int main()
{
char s[20],d[20];
int i;
printf("enter the string\n");
scanf("%[^\n]s",s);
for(i=0;s[i];i++)
d[i]=s[i];
d[i]='\0';
printf("string in destination : %s\n",d);
}
*/
//string reverse
#include<stdio.h>
int main()
{
char a[20],temp;
int i,j;
printf("enter the input\n");
scanf("%[^\n]",a);
for(j=0;s[j];j++);
for(i=0,j=j-1;i<j;i++,j--)
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	
	
