#include <stdio.h>

//�±�Ϊʲô���㿪ʼ���Ǵӻ�ַ��ƫ�������λ���洢���ǵ�һ��Ԫ��
//��Ҫ�أ�

int main()
{
    int arr[10]; //int[10] arr; ����Ĺ�������\����Ԫ�صķ���
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
