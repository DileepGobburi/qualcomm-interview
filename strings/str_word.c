//finding the word in the string if found print the word onwords
#include<stdio.h>
char *str_sub(char *s,char*d);
void main()
{
char s[20],d[20];
int i,j;
printf("enter the string1\n");
scanf("%[^\n]",s);
printf("enter the string2\n");
scanf("%s",d);
char *p=str_sub(s,d);
if(p==NULL)
printf("sub string not found\n");
else
printf("string found at %s\n",p);
}
char *str_sub(char *s,char *d)
{
int i,j;
for(i=0;s[i];i++)
	{
		if(s[i]==d[0])
			{
			for(j=1;d[j];j++,i++)
					{
						if(d[j]!=s[i])
						break;
						
					}
					if(d[j]=='\0');
					return s+i;
			}
	}
	return NULL;
}
