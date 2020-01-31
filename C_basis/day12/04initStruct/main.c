#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
    char name[100];
    int num;
    char sex;
    float score;
}Stu;

//初始化是一种特殊的语法，跟赋值不等价
//凡是 基本类型，既可以在定义的时候初始化，也可以先定义再赋值
//凡是 构造类型，要么在定义的时候初始化，不可以先定义在初始化赋值

//初始化，成员赋值
//访问，一类访问栈上 一类访问堆上的
//点成员运算符

int main()
{
    Stu *ps = (Stu*)malloc(sizeof(Stu));
    strcpy(ps->name,"zhaoliu");
    ps->num=1001;
    ps->sex='f';
    ps->score=89;

    printf("name  = %s\n",ps->name);
    printf("num   = %d\n",ps->num);
    printf("sex   = %c\n",ps->sex);
    printf("score = %f\n",ps->score);
    return 0;
}

int main2()
{
    struct stu s = {"zhangsan",1001,'f',99};
    struct stu *ps = &s;
    printf("name  = %s\n",ps->name);
    printf("num   = %d\n",ps->num);
    printf("sex   = %c\n",ps->sex);
    printf("score = %f\n",ps->score);
}

int main1()
{
//    int a;
//    a=10;

    char arr[10] = "china";

    struct stu s;//={"zhangsan",1001,'f',99};
//    strcpy(s.name,"zhangsan");
//    s.num = 1001;
//    s.sex = 'f';
//    s.score = 59;

    scanf("%s%d %c%f",&s.name,&s.num,&s.sex,&s.score);
    printf("name: %s\nnum:%d\nsex:%c\nscore:%f\n",
           s.name,s.num,s.sex,s.score);

    return 0;
}
