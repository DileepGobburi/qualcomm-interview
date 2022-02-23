//method 2 to find the char's count in string
#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int count_small[26]={0},i;
int count_capt[26]={0};
const int c=97;
const int d=65;
//printf("%d",count[20]);
printf("enter the string1\n");  //vinay dileep
scanf("%[^\n]s",s);
for(i=0;s[i];i++)
{
 int b=s[i];
 	if(b<97)
	 {
          count_capt[b-d]++;
 	 }
 	else
	 {
          count_small[b-c]++;

         }
}
for(i=0;i<26;i++)
{
	if(count_capt[i]!=0)
	{
		printf("character %c : %d \n ",(d+i),count_capt[i]);
	}
	if(count_small[i]!=0)
	{
		printf("character %c : %d \n ",(c+i),count_small[i]);
	}
}

}
