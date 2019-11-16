#include <stdio.h>

//二维数组的三要素，大数组的三要素和小数组的三要素

int main()
{
    int arr[3][4] = {1,2,3,4,
                     5,6,7,8,
                     9,0};

    printf("%d\n", arr[1][1]); //[] 基址变址运算符  A[x]  *(A+x)
    printf("%d\n", *(*(arr+1)+1));
    return 0;
}
