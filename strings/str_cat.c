#include<stdio.h>
void main()
{
char s[20],d[20];
int i,j;
printf("enter the string1\n");
scanf("%s",s);
printf("enter the string2\n");
scanf("%s",d);
for(i=0;s[i];i++);
for(j=0;d[j];i++,j++)
s[i]=d[j];
s[i]='\0';
printf("%s",s);
}
