#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10] = {94,1<<31,1<<31,77,94,65,54,94,58,71};
    int max = arr[0];
    int subm = 1<<31;
    for(int i=0; i<10; i++)
    {
        if(arr[i]>max)
        {
            subm = max;
            max = arr[i];
        }
        else if(arr[i]>subm && arr[i]!=max)
        {
            subm = arr[i];
        }
    }
    if(subm == 1<<31)
        subm = max;

    printf("max = %d  subm = %d\n", max, subm);

    return 0;
}

int main1()
{
    int arr[10];

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        arr[i] = rand()%100;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\t",arr[i]);
    }
    putchar(10);

    int max,subm;
    arr[0]>arr[1] ? (max=arr[0],subm=arr[1]) : (max=arr[1],subm=arr[0]);

    for(int i=2; i<10; i++)
    {
        if(arr[i]>max)
        {
            subm = max;
            max = arr[i];
        }
        else if(arr[i]>subm && arr[i]!=max)
        {
            subm = arr[i];
        }
    }

    printf("max = %d, subm = %d",max,subm);

    return 0;
}
