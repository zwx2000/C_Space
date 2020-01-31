#include <stdio.h>

//在什么情况下，使用传值或传址
//使用了传值与传址的效果是一样的，但是传址稍稍麻烦
//传值的方式已经打不到要求了，这个时候，要传址

//传递空间     被传递空间
//如果我们的需要不改变传递空间的内容，此时用传值
//如果我们希望通过被传递空间改变传递空间的内容，此时必传址
//当然，不改变传递空间的内容，也可以传址

//void mySwap(int i, int j)
//{
//    int t = i;
//    i = j;
//    j = t;
//}

//int main()
//{
//    int a = 3; int b = 5;
//    mySwap(a,b);
//    printf("a = %d  b = %d\n", a, b);
//    return 0;
//}

void mySwap(int *pi, int *pj)
{
    int t = *pi;
    *pi = *pj;
    *pj = t;
}

int main()
{
    int a = 3; int b = 5;
    mySwap(&a,&b);
    printf("a = %d  b = %d\n", a, b);
    return 0;
}
