#include <stdio.h>

//��ά�������Ҫ�أ����������Ҫ�غ�С�������Ҫ��

int main()
{
    int arr[3][4] = {1,2,3,4,
                     5,6,7,8,
                     9,0};

    printf("%d\n", arr[1][1]); //[] ��ַ��ַ�����  A[x]  *(A+x)
    printf("%d\n", *(*(arr+1)+1));
    return 0;
}
