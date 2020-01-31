#include <stdio.h>

//条件表达式，是一种为简洁的需要

int main()
{
    int a = 4;
    int b = 5;
    int c = 100;
    int d = 200;
    printf("%d\n", a>b?c:d>55?10:20);//从右至左 嵌套关系
}

int main1()
{
    printf("%d\n", 5>4?100:200);
    if(5>4)
    {
        printf("100");
    }
    else
    {
        printf("200");
    }
    return 0;
}
