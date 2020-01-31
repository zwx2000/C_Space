#include <stdio.h>

//处理由不同类型成员构成的构造类型，要采用结构体的方式

//无名结构体，一般而言用于定义类型时同时定义变量，并且不会带来多余的命名
//给结构体取个名字，有名结构体，一处定义，随处使用
//typedef 是一个常用于对结构体取别名的关键字，更好用的结构体

typedef struct stu
{
    char name[20];
    int num;
    char age;
    float score;
}Stu;

int main()
{
    Stu s1;

    struct stu arr[4];
    return 0;
}
