#include <stdio.h>

//��ά����Ļ���
//����/���� ��С ��ʼ�� ����
//��ʼ�� ����ʼ�� δ��ʼ�� ���ֳ�ʼ�����в��ֳ�ʼ��/���壩��Խ���
//��Ҫ��

//��ʼ�� ����ʼ��
int main ()
{
//    int arr[] = {1,2,3,4,5,6};

//    int[4] arr[3]; //ʡ3�ȼ���ʡ��һά����Ĵ�С ʡ4����ʡ�����͵Ĵ�С

//    ����ʡ�� ����ʡ��

    int arr[3][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%3d", arr[i][j]);
        }
        putchar(10);
    }
}


int main1()
{
    int arr[3][4];

    //��С
    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));

    printf("sizeof(int[3] [4]) = %d\n", sizeof(int[3][4]));

    return 0;
}
