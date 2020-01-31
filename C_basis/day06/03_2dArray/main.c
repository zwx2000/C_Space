#include <stdio.h>

//二维数组的基础
//声明/定义 大小 初始化 访问
//初始化 满初始化 未初始化 部分初始化（行部分初始化/整体），越界的
//三要素

//初始化 满初始化
int main ()
{
//    int arr[] = {1,2,3,4,5,6};

//    int[4] arr[3]; //省3等价于省了一维数组的大小 省4等于省了类型的大小

//    可以省行 不能省列

    int arr[3][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%3d", arr[i][j]);
        }
        putchar(10);
    }
}


int main1()
{
    int arr[3][4];

    //大小
    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));

    printf("sizeof(int[3] [4]) = %d\n", sizeof(int[3][4]));

    return 0;
}
