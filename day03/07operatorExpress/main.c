#include <stdio.h>

//运算符，优先级，结合性（右结合），分目
//复合运算符，本质是一种简洁的需要
int main()
{
    int a = 2;
    int b = 3;

//    a = a + b;

//    a += b; //a = a+b
//    printf("a = %d\n", a);

//    float priceOfNormalWorld = 34.5;
//    priceOfNormalWorld += 10;

    a *= b+4;  //a=a*(b+4)

    printf("a = %d\n", a);
}

int main1()
{
#if 0
    int a;
    int b;
    int sum;
    sum = a+b;
    sum = (a+b) * (a+b);
#endif

    int a, b, c, d, e;

    a = b = c = d = e = 5;

    printf("a = %d b = %d c = %d d = %d e = %d\n",a,b,c,d,e);

    //任何表达式是有值的
    c = (a=b) + (b=c); //'=' 赋值号 不是等号 从右至左
    printf("%d\n",c);
    printf("%d", a=b);


    a++;//单目
    a+b;//双目
    a>b?c:d; //三目 a>b是一个表达式值 也可用1或0替换

    return 0;
}
