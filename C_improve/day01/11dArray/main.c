#include <stdio.h>

int main()
{
    int arr[3][4] = {0,0,0,0,1,111,1,1,2,2,2,2,3,3,3,3};

    printf("   arr = %p    arr+1 = %p\n",arr,arr+1);
    printf("arr[0] = %p arr[0]+1 = %p\n",arr[0],arr[0]+1);

    printf("%d\n",*(*(arr+1)+1));

    printf("   arr = %p    arr+1 = %p\n",arr,arr+1);
    printf("arr = %p arr[0]+1 = %p\n",arr[0],arr[0]+1);

    return 0;
}
