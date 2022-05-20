#include<stdio.h>

struct emp
{
        int eno;
        char ename[30];
        float sal;
}v1 = {123,"sindhu",12.34}; //Considered as global variables and stored in data segment

int main()
{

        struct emp v1 = {123,"sindhu",12.34}; //Considered as local variables and stored in stack segment
        printf("%d %s %g\n", v1.eno, v1.ename, v1.sal);
}

