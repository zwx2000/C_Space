#include <stdio.h>

//a+b = -99
//a+b = 4294967197
int main1()
{
   //����һ���޷��� ��������ת��Ϊ�޷���
   unsigned int a = 1;
   int b = -100;
   printf("a+b = %d\n", a+b);
   printf("a+b = %u\n", a+b);

   if(a+b>a)
       printf("a+b>a\n");
   else
       printf("a+b<a\n");

   return 0;
}

int main()
{
    char a[1000];
    int i;
    for(int i=0; i<1000; i++)
    {
        a[i] = -1-i;
    }
    printf("%d\n", strlen(a));
    return 0;
}
