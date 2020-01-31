#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3};

    int *p = arr;  //&arr[0] -> &int -> int *

    for(int i=0; i<10; i++)
        printf("%d\n",*p++);
}

//指针数组 本质是一个数组
//想要用指针来访问指针数组

int main1()
{
    char * pa[] = {"Google", "Oracle","Facebook","Apple","NZ"};

    for(int i=0; i<sizeof(pa)/sizeof(*pa); i++)
    {
        printf("%s\n",pa[i]);
    }

    char **p = pa;

    return 0;
}
