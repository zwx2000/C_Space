#include <stdio.h>

//下标为什么从零开始，是从基址处偏移零个单位处存储的是第一个元素
//三要素，

int main()
{
    int arr[10]; //int[10] arr; 代表的构造类型\参与元素的访问
    for(int i = 0; i<10; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

//    for(int i=0; i<10; i++)
//    {
//        printf("%d\n", arr[i]);
//        printf("%d\n", *(arr+i));
//    }
    return 0;
}
