#include <stdio.h>

//�ڹ����о�������

//�����ݸ���С����,��λ�ֽڶ��룬truncate,�ضϡ�
//�п���������ݶ�ʧ

int main()
{
   int a = 0xff;
   char b = a;

   printf("%d\n",b);

   int aa = 256;
   char bb = aa;
   printf("%d\n",bb);
   return 0;
}

//С���ݸ��������

int main1()
{
    char a = 0xff;          //                              1111 1111
    int b = a;

    printf("b = %d\n",b);   //1111 1111 1111 1111 1111 1111 1111 1111

    char aa = 0x7f;         //                              0111 1111
    int bb = aa;
    printf("bb = %d\n",bb); //0000 0000 0000 0000 0000 0000 0111 1111

    return 0;
}
