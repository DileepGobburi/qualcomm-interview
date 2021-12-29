2.If 5 bit is set then set 11 bit and 12 bit else clear the 11 bit and 12 bit

#include <stdio.h>
int main()
{
    int n,p,i,ret,x,y;
    printf("enter the n value and bit num\n");
    scanf("%d %d",&n,&p);
    for(i=31;i>=0;i--)
    printf("%d",n>>i&1);
    printf("\n");
  ret=(n>>p&1)?printf("set"):printf("clear");
  printf("%d\n",ret);
  if(ret==3)
  {
      n=n|(1<<11)|(1<<12);//multiple bits set at a time
      printf("%d\n",n);
      for(i=31;i>=0;i--)
    printf("%d",n>>i&1);
  }
else
{
    n=n &(~(1<<11))&(~(1<<12));//multiple bit clear at at time
     printf("%d\n",n);
      for(i=31;i>=0;i--)
    printf("%d",n>>i&1);
    
}
}
