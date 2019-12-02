#include <stdio.h>

struct _birth
{
    int year;
    int month;
    int day;
};

typedef struct _stu
{
    char name[1024];
    int num;
    char sex;
    float score;
    struct _birth birth;
}Stu;

int main()
{
    Stu s = {"wangwu",1001,'f',99,{1999,9,9}};
    return 0;
}
