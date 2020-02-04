#include <stdio.h>

typedef struct _stuff
{
    char name[10];
    char sex;
}Stuff;

//初始化 是不同于赋值的

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9};

    Stuff b = {"china", 'm'};

    return 0;
}
