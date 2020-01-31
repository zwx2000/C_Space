#include <stdio.h>
#include <stdlib.h>

//一维数组的数组名，是一级指针，二维数组的数组名，是数组指针

//& 取地址符

int main()
{
    int arr[3][4]; //int[4]  arr[3];  T arr[3]

//    printf("arr = %p\n", arr);
//    printf("&arr[0] = %p\n", &arr[0]);

//    printf("arr[0] = %p\n", arr[0]);    //内嵌一维数组起始地址
//    printf("&arr[0][0] = %p\n", &arr[0][0]);

    printf("arr    = %p\n", *arr);
    printf("*arr+1 = %p\n", *arr+1);
}


int main2()
{
    int arr[3][4]; //int[4]  arr[3];  T arr[3]

    printf("arr = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);

    printf("arr = %p arr+1 = %p\n", arr, arr+1);

    printf("arr[0] = %p\n", arr[0]);    //内嵌一维数组起始地址
    printf("&arr[0][0] = %p\n", &arr[0][0]);

    printf("&arr[0] = %p arr[0]+1 = %p\n", arr[0], arr[0]+1);   //内嵌一维数组步长

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; j++)
        {
            arr[i][j] = rand()%100;
        }
    }

    for(int i=0; i<3; ++i)
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
    int arr[4];

    printf("arr = %p\n", arr);           //起始地址
    printf("&arr[0] = %p\n", &arr[0]);

    printf("arr = %p arr+1 = %p\n", arr, arr+1);    //步长

    for(int i=0; i<4; i++)              //范围
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
