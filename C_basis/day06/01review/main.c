#include <stdio.h>

#if 0
//�﷨
//�������� ��С ��ʼ�� ����
//�洢 ��Ҫ��

//�������ж�����

//������̬
//��/��ֵ
//�����Ż�
//����
#endif

int main()
{
    int arr[10];

    printf("sizeof(arr) == sizeof(int[10])\n");
    printf("sizeof(arr) == %d\n", sizeof(arr));
    printf("sizeof(arr) == %d\n", sizeof(int[10]));

    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
