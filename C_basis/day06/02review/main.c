#include <stdio.h>

//�������ж�����
//��ʾ��������
//��ʾ��Ԫ�صĵ�ַ

//��Ҫ��

//struct
//{
//    int a;
//    char b;
//}xx;

int main()
{
//    xx.a;
//    xx.b;

    //arr[0] == *(arr+0);
    //arr[1] == *(arr+1);

    int arr[10];
    printf("sizeof(arr) = %d\n", sizeof (arr));
    printf("arr = %p  &arr[0] = %p \n", arr, &arr[0]);

    printf("%d %d\n", arr[1], 1[arr]);
    printf("%d %d\n", *(arr+1), *(1+arr));

    for(int i=0; i<10; i++)
    {
        printf("%d\n", &arr[i]);
        printf("%d\n", &arr[i+1]);
    }

    return 0;
}
