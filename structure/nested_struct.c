#include<stdio.h>

typedef struct test
{
        char name[20];
        int roll_no;
        char address[100];
}test1;

typedef struct struct1
{
        test1 t1;
        int id;
}v1;

typedef struct struct2
{
        test1 t2;
        char ename[20];
}v2;

int main()
{
        v1 s1 = {{"sindhu", 99, "Mandya"}, 1234};
        v2 s2 = {{"Rakshitha", 74, "Mysore"}, "Dipa"};
        printf("%s\n", s1.t1.name);
        printf("%d\n", s1.t1.roll_no);
        printf("%s\n", s1.t1.address);
        printf("%d\n", s1.id);
        printf("%s\n", s2.t2.name);
        printf("%d\n", s2.t2.roll_no);
        printf("%s\n", s2.t2.address);
}
