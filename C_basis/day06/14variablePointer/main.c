#include <stdio.h>

//����һ��ָ�����������Ҫ�������ֶ�����һ���ǵ�ַ���ͣ���������

//type * pointerName;
//* �����˱�����ָ�����,��С,�˴���*�����ڱ�ʾ����
//���;����˸�ָ������д洢�ĵ�ַ��Ѱַ����

int main1()
{
    int data = 0x12345678;

    int *pd = &data;

   printf("%x\n",*pd);
   printf("%x\n",*(int*)pd);
   printf("%x\n",*(short*)pd);
   printf("%x\n",*(char*)pd);

}


int main()
{
//    int a = 12;
//    char ch = 'c';
//    float d = 1.2f;

    char a = 1; short b = 2; int c = 3; float f = 4; double d = 5.6;

   printf("%d\n", sizeof(char  *));
   printf("%d\n", sizeof(short *));
   printf("%d\n", sizeof(int   *));
   printf("%d\n", sizeof(float *));
   printf("%d\n", sizeof(double*));

   char *pa = &a;
   short *ps = &b;
   int *pi = &c;
   float *pf = &f;
   double *pd = &d;

    return 0;
}
