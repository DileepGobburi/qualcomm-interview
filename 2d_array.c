4.Allocating memory for 2d array of rows and columns using dynamical approach
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,k=10;
    printf("ener r and c\n");
    scanf("%d %d",&r,&c);
    int **p=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    p[i]=(int*)malloc(c*sizeof(int));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p[i][j]=k++;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",p[i][j]);
    
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    free(p[i]);
    free(p);
}
