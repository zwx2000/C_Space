#include <stdio.h>

//while当型循环，只有条件满足，才能向下执行。有可能一次都不执行
//do while 直到，直到条件为假，才终止循环。  至少执行一次

//如果第一次循环判断为真，两者结果是一致的
//如果第一次循环判断为假，两者结果不一样，while一次没的执行，do while执行了一次

//do while用作入参型检查,知道输入的数据满意为止
int main()
{
    char ch;

    do
    {
        printf("同意协议请输入y/Y, 退出n/N:");
        scanf("%c", &ch);
    }while(ch == 'n');

    printf("下一步\n");
    return 0;
}
