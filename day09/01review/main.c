#include <stdio.h>

//在什么情况下，使用传值或传址
//使用了传值与传址的效果是一样的，但是传址稍稍麻烦

//int myMax(int i, int j)
//{
//    return i>j?i:j;
//}

//int main()
//{
//    int a = 3; int b = 5;
//    int max = myMax(a,b);
//    printf("max = %d\n", max);
//    return 0;
//}

int myMax(int *pi, int *pj)
{
    return *pi>*pj?*pi:*pj;
}

int main()
{
    int a = 3; int b = 5;
    int max = myMax(&a,&b);
    printf("max = %d\n", max);
    return 0;
}
