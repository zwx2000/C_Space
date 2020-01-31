#include <stdio.h>

//3  4
//4  3
//2  6
//6  2
int main()
{
    int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int (*p)[3] = (int(*)[3])arr;//ǿת

    for(int i=0; i<sizeof(arr)/sizeof(int[3]); i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%3d ",*(*(p+i)+j));
        }
        putchar(10);
    }

    return 0;
}
