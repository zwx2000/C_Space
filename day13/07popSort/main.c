#include <stdio.h>

#define N 5

//N个数比较N-1趟
//内层循环的下标每次都从头开始，比较规则是同下一个比较
//内层循环的次数，N-1-i

int main(int argc, char *argv[])
{
    int arr[N] = {5,4,3,2,1};

    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
            }
        }
    }

    for(int i=0; i<N; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
