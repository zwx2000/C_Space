#include <stdio.h>

int main()
{
    int a;
    int *p = &a;
    printf("%p\n", p);

    *p = 100;
    printf("a = %d\n", a);

    int b;

    p = &b;
    *p = 200;
    printf("b = %d\n", b);
    return 0;
}
