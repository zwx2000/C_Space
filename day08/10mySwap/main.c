#include <stdio.h>

//地址对于不同的作用域来说是开放的

//void mySwap(int a, int b)
//{
//    int t = a;
//    a = b;
//    b = t;
//}

void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main()
{
    int a=3, b=5;
    printf("a = %d b = %d\n", a, b);
    mySwap(&a,&b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}


