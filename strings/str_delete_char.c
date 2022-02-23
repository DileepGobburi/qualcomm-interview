//delete char in all occurences
#include<stdio.h>
void main()
{
char a[50],ch;
int i,j,k;
printf("enter the string\n");
scanf("%[^\n]",a);
printf("enter the char to delete\n");
scanf(" %c",&ch);
for(i=0;a[i];i++);
for(j=0;a[j];j++)
{
if(ch==a[j])
{
for(k=j;k<i;k++)
a[k]=a[k+1];
j--;
}
}
printf("after delete the char in all occurences: %s\n",a);
}
