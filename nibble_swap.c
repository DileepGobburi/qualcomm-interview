1.swap the nibbles of the given number
i/p:0x123456ab
o/p:0x214365ba

#include <stdio.h>

int fun( int x)
{
    return((x & 0x0f0f0f0f)<<4|(x & 0xf0f0f0f0)>>4);
}

int main()
{
 int x =0x123456ab;
printf("%x",fun(x));
}
