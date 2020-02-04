#include <stdio.h>

int main()
{
    int arr[4];

    printf("arr = %p arr+1 = %p\n", arr, arr+1);

    //引用 对数组名取引用变成数组指针
    printf("&arr = %p &arr+1 = %p\n",&arr, &arr+1);

    printf("*&arr = %p  *&arr+1 = %p\n",*&arr, *&arr+1);

    int a[3][4]; //a[0] a[1] a[2]


    //*(a+1)使得a由数组指针变成一级指针
    //*(*(a+1)+1); 再对一级指针提领取内容

    return 0;
}
