#include <stdio.h>

int main()
{
    int arr[10]; //int[10] a;

    int * q[4];//指针数组 4个指针
    int (*p)[4] = NULL;//int[4] *p 数组指针

    printf("sizeof(p) = %d\n", sizeof(p));
    printf("p = %p p+1 = %p\n", p, p+1);

    typedef char (*AP)[10];
    AP ap = NULL;
    printf("sizeof(ap) = %d\n", sizeof(ap));
    printf("ap = %p  ap+1 = %p\n",ap, ap+1);
    return 0;
}
