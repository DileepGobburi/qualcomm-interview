//to revrese a particular word in a string
#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[50];
int i,j,c,d,flag=0;
int a[10];
static int k=0;
printf("enter the string1\n");  //vinay dileep
scanf("%[^\n]s",s1);
printf("enter the word to be find\n");//dileep
scanf("%s",s2);
c=strlen(s1);     //12
d=strlen(s2);     //6
for(i=0;s1[i]!='\0';i++)
{
	if(s1[i]==s2[0])  //i=6
	{
		if(i==0)                               //to check whether our word is first word in the sentence.
		 {
			for(j=1,i=1;s2[j];j++,i++)
			{
				if(s2[j]!=s1[i])
    					break;
			}
                    if((j==d)&&(s1[i]==' '))
		     { flag=1;
                       a[k]=(i-d);
                       k++;
                     }
                  
		 }
                 else if((i+d)==c)                       // to check whether our word is last word of the sentence
                 {
                       for(j=1,i=i+1;s2[j];j++,i++)
                       {
                            if(s2[j]!=s1[i])
    					break;
                        }
                         if((j==d)&&(s1[i-d-1]==' '))
                          {  flag=1;
                             a[k]=(i-d);
                             k++;
                          }
                  }
                  
                 else                                     // if my word is in middle of the sentence
                  { 
                        for(j=1,i=i+1;s2[j];j++,i++)
                         {  flag=1;
                            if(s2[j]!=s1[i])
    					break;
                          }
                            if((j==d)&&(s1[i]==' ')&&(s1[i-d-1]==' '))
                             {
                               a[k]=(i-d);
                               k++;
                             }
                   }
           }
        
}
if(flag==0)
{
printf("word not found\n");
}
for(i=0;i<k;i++)
{                                
   int p=a[i];                   
   for(j=0;j<d/2;j++)
    { char temp=s1[p+j];
      s1[p+j]=s1[p+d-1-j];
      s1[p+d-1-j]=temp ;
     } 
}
printf("%s",s1);

}
                        
