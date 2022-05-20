#include<stdio.h>

//#pragma pack(1)

/*struct test
{
        char ch;
        int a;
        float b;
};
int main()
{
        struct test *ptr = NULL;
        ptr++;
        printf("Size of structure = %d\n", ptr);
}
*/

struct test
{
        char ch;
        int a;
        float b;
        struct test *ptr;
        double d;
}var;

int main()
{
        printf("Size of structure = %d\n", (char*)(&var+1) - ((char *)&var));
}
