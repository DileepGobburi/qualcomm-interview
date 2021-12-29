5. find the second biggest element in the array

#include<stdio.h>
int main()
{
    int i,b1,n,b2,a[]={1,29,387,34,23,21,45,29,38,10};
    n=sizeof a/sizeof a[0];
    for(i=1;i<n;i++)
    {
        if(a[0]!=a[i]);
        break;
    }
    if(a[0]>a[i])
    b1=a[0],b2=a[i];
    else
    b1=a[i],b2=a[0];
    for(i=1;i<n;i++)
    {
        if(b1==a[i])
        continue;
        if(b1<a[i])
        b2=b1,b1=a[i];
        else if(b2<a[i])
        b2=a[i];
    }
    printf("big1 =%d,big2 =%d",b1,b2);
    
}
