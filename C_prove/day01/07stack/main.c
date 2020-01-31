#include <stdio.h>

void Arr(int *parr, int i, int len)
{
    for(;i<len;i++)
        printf("%d\n",parr[i]);
}

void reverseArr(int *parr, int i, int len)
{
    if(i != len-1)
        reverseArr(parr,i+1,len);
    printf("%d\n", parr[i]);
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    Arr(arr,0,10);
    reverseArr(arr,0,10);
    return 0;
}

#if 0
int getAge(int n)
{
    if(n==5)
        return 10;
    else
        return getAge(n+1)+2;
}

int main()
{
    int age = getAge(1);
    printf("Age = %d\n", age);
    return 0;
}
#endif
