#include <stdio.h>

// % 求余运算的符号，等同一的被求余的数
// % 要求运算符必须是下整型
// 附加语义
// 10/3 10.0/3 不要拿浮点数求余 求出3.333... 无余数

// ++ 自加 a++ => a+=1;

// ++ 自己独立构成表达式的时候，前后++是没有区别的
// ++ 构成的表达式参与了其他表达式的构成或运算,完结以后，自增1

// 后++ 先使用，去构成表达式的计算，完结以后，自增1
// 前++ 先完成自增1，再构成表达式的计算

// ++ 简洁的需要

// +++在编译原理上，叫大嘴法则

int main()
{
    int a = 5;
    //++a++; 不要写自己看不懂，又不知道机器怎么运行的东东，又不知道平台差异性的东西

    int b = 10;
    printf("%d\n", a+++b);//编译时 a+后面为+号 构成不了加法表达式，所以构成a++表达式

    return 0;
}

int main2()
{
    int a = 10;
    printf("a = %d\n", ++a);
    printf("a = %d\n", a);

    float priceOfNormalWorld = 23.5;
    priceOfNormalWorld ++;

    return 0;
}

int main1()
{
    int a = 10;
    int b = 3;
    a+b; a-b; a*b;

    printf("%f\n", (float)a/b);

    printf("-7%%3 = %d\n", -7%3);

    for(int i=0; i<100; i++)
    {
        if(i%3 == 0)
        {
            printf("%d\n", i);
        }
    }


    return 0;
}
