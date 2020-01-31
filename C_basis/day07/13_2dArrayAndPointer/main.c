#include <stdio.h>

int main()
{
    int arr[3][4] = {1,2,3,4,
                     10,20,30,40,
                     100,200,300,400};
    for(int i=2; i>=0; i--)
    {
        for(int j=3; j>=0; j--)
        {
            printf("a[%d][%d] = %#x\n", i, j, &arr[i][j]);
        }
        printf("===============================================================================\n");
    }
    printf("arr    =%#p  arr+1    =%#x  arr+2    =%#x \n", arr, arr+1, arr+2);
    printf("arr[0] =%#p  arr[0]+1 =%#x  arr[0]+2 =%#x \n", arr[0], arr[0]+1, arr[0]+2);

    //降维  升维
    printf("*arr   =%#p  *arr+1   =%#x  *arr+2   =%#x \n", *arr, *arr+1, *arr+2);
    printf("&arr[0]=%#p  &arr[0]+1=%#x  &arr[0]+2=%#x \n", arr[0], arr[0]+1, arr[0]+2);

    //a  a[0];
    //a  -> *a  -> a[0];
    //a[0] -> &a[0] -> a;

    printf("%d\n", *(*(arr+2)+1));
    printf("%d\n", arr[2][1]);

//    printf("%d\n", *(*(a+j)+i));

    int *p = (int*)0x12345678;
    *p = 300;
    //容易导致内存崩溃 等价于野指针

    return 0;
}
