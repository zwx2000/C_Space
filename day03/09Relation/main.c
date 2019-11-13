#include <stdio.h>

//关系表达式的运算结果，只有1和0，常用于判断使用
// = 表示赋值， == 表示等于，原因是，赋值的使用频率更高

int main()
{
    int x = 5; int y = 6;

    if(x == y)
    {
        printf("x == y\n");
    }
    else {
        printf(" x != y\n");
    }
}

int main1()
{
    int a = 10;
    int b = 20;

    a>b; a==b; a<b; a!=b; a<=b; a>=b;

    printf("%d\n", a>b);

    if(a>b)
    {
        printf("a > b");
    }
    else
    {
        printf("a <= b");
    }
    return 0;
}
