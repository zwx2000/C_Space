#include <stdio.h>

//����Ĵ��ݲ�����ͨ�������ķ�ʽ������
//C���Ի���Ч�ʵ�ԭ���ڴ��ݵ�ʱ�����������䵱��ַʹ��
//��������Ҫ�أ���ʼ��ַ���������̶ȣ�����Χ
//����������һ��ָ�룬��������ʼ��ַ���������̶ȣ� ������������û�а�����Χ
//�����ڴ���һά�����ʱ��Ҫ�����������ͷ�Χ

//void disArray(int arr[10])
//{
//    printf("dissizeof(arr) = %d\n", sizeof(arr));
//}

//disArray(arr);
//disArray()

void disArray(int *p, int n)
{
    printf("disArray sizeof(arr) = %d\n", sizeof(p));

    for(int i=0; i<n; i++)
    {
        printf("%d\n", *p++);
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7};
    printf("sizeof(arr) = %d\n", sizeof(arr));

//    for(int i=0; i<10; i++)
//    {
//        printf("%d\n", arr[i]);
//    }

    //*arr == arr[0]
    disArray(arr,sizeof(arr)/sizeof(*arr));
    return 0;
}
