#include <stdio.h>

void foo(int(*p)[4],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ",p[i][j]);
        }
        putchar(10);
    }
}

int main()
{
    int arr[3][4] = {1,1,1,1,2,2,2,2,3,3,3,3};
    //int[4] arr[3] arr &arr[0]
    foo(arr,3);

    //本质为一维数组
    int *p = (int*)arr;

    for(int i=0; i<12; i++)
    {
        printf("%d\n",p[i]);
    }

    return 0;
}
