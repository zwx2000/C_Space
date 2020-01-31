#include <stdio.h>

//sizeof是一个关键字 不是函数
//算数>关系>逻辑 ‘！’除外 sizeof同级

int main()
{
    char ch;
    printf("sizeof(ch) = %d\n", sizeof(ch));
    printf("sizeof(char) = %d\n", sizeof(char));

    char a; int b; //b = sizeof a;

    printf("sizeof a+b = %d\n", sizeof(a+b));
    return 0;
}
