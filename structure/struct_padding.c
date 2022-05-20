// Structure programming

1. 
#include<stdio.h>

//#pragma pack(1)  //8 bit s/m
//#pragma pack(2)  //16 bit s/m
//#pragma pack(4)  //32 bit s/m
#pragma pack(8)
/*
Disadvantage of pragma pack lowers the system performance by increasing a CPU cycles.
To avoid structure padding we make use of pragma pack.
Structure padding makes faster execution by decreasing the CPU cycles.
*/

struct test
{
        char ch1;
        int a;
        short int b;
        float f1;
        double d1;
};

int main()
{
        printf("%zu\n", sizeof(struct test));
}
