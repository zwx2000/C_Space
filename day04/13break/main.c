#include <stdio.h>

//break不能单独使用 switch break；

//循环在一起 break 跳出循环 break通常跟在if判断条件之后
//阀，闸

int main()
{
    int flood = 90;
    while(1)
    {
        printf("flood level : %d\n", flood);
        sleep(1);
        flood ++;
        if(flood>120)
            break;
    }
    printf("泄洪\n");
    return 0;
}
