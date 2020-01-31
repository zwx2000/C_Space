#include <stdio.h>

//数组访问 偏移法 本质法
//数组访问 下标法

//数组名是指针常量，方可唯一的表示一个数组，数组名是数组的唯一标识，定数组神针
//一维的数组名，可以赋给一级指针。
//二维数组名可赋给二维指针是瞎扯的！

//数组名能干的，指针就能干，数组名不能干的，指针也能干

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    //    for(int i=0; i<10; i++)//偏移法
    //    {
    //        printf("%d\n", *(arr+i));
    //    }

    //    for(int i=0; i<10; i++)//本质法
    //    {
    //        printf("%d\n", arr[i]);
    //    }

    printf("   arr    = %p\n", arr);
    printf("  arr+1   = %p\n", arr+1);

    printf(" &arr[0]  = %p\n", &arr[0]);
    printf("&arr[0]+1 = %p\n", &arr[0]+1);

    //&arr[0] == arr 在一定程度上 int*

    int *pa

    return 0;
}
