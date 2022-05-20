#include<stdio.h>

struct emp
{
        int eno;
        char ename[30];
        float sal;

        struct
        {
                float da;
                float hra;
                float ea;
        }v1;
}v2;

int main()
{
        scanf("%d %s %f", &v2.eno, v2.ename, &v2.sal);
        scanf("%f %f %f", &v2.v1.da, &v2.v1.hra, &v2.v1.ea);
        printf("eno = %d ename = %s sal = %g\n", v2.eno, v2.ename, v2.sal);
        printf("da = %g hra = %g ea = %g\n", v2.v1.da, v2.v1.hra, v2.v1.ea);
}
