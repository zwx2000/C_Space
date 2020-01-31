#include <stdio.h>//将printf声明在定义之前

//定义和声明的关系
//定义在前，调用在后
//定义在后， 调用在前，此时需要前向声明
//函数一个特点，先声明后使用

//在函数调用的时候。输入的参数，叫做实参
//在函数定义或是声明的时侯输入的参数，叫形参。声明中的形参可以省略

//入参中如果没有参数，可以用void表示无入参，通常省略
//如果没有返回值，即返回类型的void，void不可省略/若省略系统默认返回int

int myMax(int i, int j)
{
//    if(i>j)
//        return i;
//    else
//        return j;
    return i>j?i:j;
}

int main()
{
    int a=3; int b=5;
    int iMax = myMax(a,b);

    printf("max value = %d\n", iMax);
    return 0;
}
