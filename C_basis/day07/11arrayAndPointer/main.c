#include <stdio.h>

int main()
{
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr[10] = {5,5,5,5,5,5,5,5,5,5};

    int *pa = arr;

//    for(int i=0; i<10; i++)//ƫ�Ʒ�
//    {
//        printf("%d\n", *(pa+i));
//    }

//    for(int i=0; i<10; i++)//���ʷ�
//    {
//        printf("%d\n", pa[i]);
//    }

    for(int i=0; i<10; i++)//���ʷ�
    {
       // printf("%d\n", (*pa)++);
       printf("%d\n", arr[0]++);
    }

    for(int i=0; i<10; i++)//���ʷ�
    {
       printf("%d\n", *pa++);//����++
    }                        //��++ ��ʹ�� ��++

    return 0;
}
