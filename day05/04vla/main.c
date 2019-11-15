#include <stdio.h>

//所谓的变长数组，就是运行开始，有一次改变大小的机会，在其后的运行期间不可以改变大小
//且vla不可以初始化

int main()
{
    int var;
    scanf("%d", &var);
    int arr[var]; //整型常量表达式

    printf("sizeof(arr) = %d\n", sizeof(arr));
    var = 200;
    printf("sizeof(arr) = %d\n", sizeof(arr));

    return 0;
}
