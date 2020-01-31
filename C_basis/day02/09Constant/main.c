#include <stdio.h>

//常量的用途，主要用于赋值，运算
//常量的表现形式，有两种，字面量，宏

//常量是有类型的

#define Price 100.0
#define Pi 3.1415926

int main()
{
//    float area = Pi * 2.0*2.0;
//    printf("area = %f\n", area);

    int age = 30;
    age = age+10;
    float salary = 1234.56;

    char sex = 'm';

    char name[] = "xiaoming";
    printf("sizeof(0) = %d sizeof(0.0) = %d",sizeof(0), sizeof(0.0l));
    return 0;
}
