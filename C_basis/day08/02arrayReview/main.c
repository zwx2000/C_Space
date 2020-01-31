#include <stdio.h>

//一维数组名可以赋给一级指针
//能用数组名解决的问题，用指针可以解决，而用指针解决的问题，数组名却未可

//具备相同地址的指针。
int main()
{
    int arr[3][4];

#if 0
    arr     arr+1      arr+2
    arr[0]  arr[0]+1   arr[0]+2

    *arr    *arr+1     *arr+2
    &arr[0] &arr[0]+1  &arr[0]+2
#endif

}

int main1()
{
    int arr[10];
    printf("%d  %d\n", arr[0], *(arr+0));

    //    arr == &arr[0]  int*
    //    int *pa = &arr[0];
    int *pa = arr;
    //数组名要唯一的标识数组。是定数组神针，指针常量

    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
