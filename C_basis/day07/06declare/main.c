#include <stdio.h>

//运算符重载，由语境决定运算符的属性

int main()
{
    int data;
    int *pd = &data; //用于声明变量

    *pd = 200;       //解引用 取内容

    char * p, * q; //int a,b;

    printf("sizeof(p) = %d  sizeof(q) = %d\n", sizeof (p), sizeof (q));

    return 0;
}
