#include<stdio.h>
typedef struct profile
{
enum week{sun,mon,tue,thu,fri,sat}characters;
}var;

int main()
{
        var v1;
        v1.characters = mon;     //1
        printf("%d\n", v1.characters);
}
