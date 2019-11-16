#include <stdio.h>

//ָ�� ����+��ַ

//int ��ֵ+1�� ���Ǽ�1
//T   *ָ��+1�� �ӵ��ǲ�����sizeof(T)�Ĵ�С

//p+1 �ı��� p + sizeof(int)
//q-p == 1  <==>  4/sizeof(int)

int main1()
{
    int *p = 0x0001;
    int *q = 0x0005;

    if(q-p == 1)
    {
        printf("p+1 == q\n");
    }
}

int main()
{
    int *p = (int*)0x0001;
    int data = 0x0001;

    printf("p = %#x  p+1 = %#x\n", p, p+1);
    printf("data = %#x  data+1 = %#x\n", data, data+1);

    printf("(double*)p = %#x  (double*)p+1 = %#x\n", (double*)p, (double*)p+1);
    printf("(int)data = %#x  (int)data+1 = %#x\n", (int)data, (int)data+1);

    printf("%x\n", ++p);
    printf("%x\n", ++data);

    int arr[10];

    int pHead = (int)&arr[0];
    int pTail = (int)&arr[9];
    printf("%d\n", pTail-pHead);
//    pHead + 9*sizeof(int) = pTail

//    int *pHead = &arr[0];
//    int *pTail = &arr[9];
//    printf("%d\n", pTail-pHead);

    return 0;
}
