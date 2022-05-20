#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct emp
{
        int eno;
        char ename[20];
        float sal;
}v1;

int main()
{
        v1 *ptr = (v1*)malloc(sizeof(v1));
        ptr->eno = 12;
        //ptr->name = "sindhu" ; //Syntax error : Assignement to expression with array type, because ename stores base address of array so we cannot point to base address
        strcpy(ptr->ename,. "sindhu");
        ptr->sal = 12.46;
        printf("eno = %d\n", ptr->eno);
        printf("ename = %s\n", ptr->ename);
        printf("sal = %g\n", ptr->sal);

}

