#include <stdio.h>

//相同类型的结构体之间可以赋值
//此语法基础奠定了可以用于传参和返值

typedef struct stu
{
    char name[100];
    int num;
    char sex;
    float score;
}Stu;

int main()
{
    Stu s; Stu s2 = {"wangwu",1001,'f',89};
    s = s2;

    return 0;
}
