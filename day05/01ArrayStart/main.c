#include <stdio.h>

//��ͬ���������ͽ��й��죬�ͳ�������
//��ͬ���������ͽ��й��죬�ͳ��˽ṹ��

//�Թ���������˵�������о�����·��
//���� ��С ��ʼ�� ����
//int  10

int main()
{
//    int a = 100;
//    a = 30;
//    int a[10];
//    a[10] = {1,2,3,4,}��

    int arr[10];  // a[0]--a[9]

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(int[10]) = %d\n", sizeof(int[10]));

    struct
    {
        char a; int b; float c;
        double d; double e; long f;
        long long ll;
    }structVar;

    printf("%d\n", sizeof(struct{char a; int b; float c;double d; double e; long f;long long 11}));

    return 0;
}
