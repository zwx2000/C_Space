#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //基本数据类型在zha栈和堆上
    int a; a = 100;
    printf("a = %d\n",a);

    int *p = (int*)malloc(1*sizeof(int));
    *p = 100;
    printf("*p = %d\n", *p);

    //数组类型在栈和堆上
    //int arr[10];

    int *pa = (int*)malloc(10*sizeof(int));

    memset(pa,0,10*sizeof(int));

    for(int i=0; i<10; i++)
    {
        printf("%d\n",pa[i]);
    }

    free(pa);

    return 0;
}
