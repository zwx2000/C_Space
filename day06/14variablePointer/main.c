#include <stdio.h>

//声明一个指针变量，必须要保存两种东西，一个是地址类型，二是数据

//type * pointerName;
//* 表明了本变量指针变量,大小,此处的*仅用于表示声明
//类型决定了该指针变量中存储的地址的寻址能力

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
