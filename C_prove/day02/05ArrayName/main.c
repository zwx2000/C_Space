#include <stdio.h>

int main()
{
    int arr[4];

    printf("arr = %p arr+1 = %p\n", arr, arr+1);

    //���� ��������ȡ���ñ������ָ��
    printf("&arr = %p &arr+1 = %p\n",&arr, &arr+1);

    printf("*&arr = %p  *&arr+1 = %p\n",*&arr, *&arr+1);

    int a[3][4]; //a[0] a[1] a[2]


    //*(a+1)ʹ��a������ָ����һ��ָ��
    //*(*(a+1)+1); �ٶ�һ��ָ������ȡ����

    return 0;
}
