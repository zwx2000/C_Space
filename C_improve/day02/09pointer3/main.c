#include <stdio.h>


//二级指针步长始终为4
int main()
{
#if 0
    char *p = 0;
    char **pp = &p;

    printf("p = %p p+1 = %p\n", p, p+1);
    printf("pp = %p pp+1 = %p\n", pp, pp+1);
#endif

    double *p = 0;
    double **pp = &p;

    printf("p = %p p+1 = %p\n", p, p+1);
    printf("pp = %p pp+1 = %p\n", pp, pp+1);

    int a;
    short b;
    long c;
    long long d;
    printf("%d,%d,%d,%d",sizeof(a),sizeof (b),sizeof (c),sizeof (d));

    return 0;
}
