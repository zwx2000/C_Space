#include <stdio.h>

//数组名是数组唯一的标识符
//数组名充当一种构造类型
//shu'zu'ming 充当访问数据成员的首地址

int main()
{
    int arr[3][4];
    printf("sizeof(a) = %d\n", sizeof(arr));
    printf("sizeof(int[3][4]) = %d\n", sizeof(int[3][4]));

    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ", *(arr[i]+j));
            putchar(10);
        }
    }
    return 0;
}

int main1()
{
    int arr[10];

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(int[10]) = %d\n", sizeof(int[10]));

    printf("arr = %p\n", arr);
    printf("arr = %p\n", &arr[0]);
    printf("arr[0] = %d\n", *(arr+0));

    return 0;
}
