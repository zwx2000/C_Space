#include <stdio.h>

int main()
{
    int arr[4] = {11,22,33,44};
    printf("sizeof(arr) = %d\n",sizeof(arr));
    printf("sizeof(int[4]) = %d\n",sizeof(int[4]));

    printf("arr = %p\n",arr);
    printf("&arr[0] = %p\n",&arr[0]);

    printf("arr+1 = %p\n",arr+1);
    printf("&arr[0]+1 = %p\n",&arr[0]+1);

    printf("%d\n",arr[1]);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(1+arr));
    printf("%d\n",1[arr]);
    return 0;
}
