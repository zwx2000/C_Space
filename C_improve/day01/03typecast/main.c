#include <stdio.h>

//在工作中尽量避免

//大数据赋给小变量,低位字节对齐，truncate,截断。
//有可能造成数据丢失

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

//小数据赋给大变量

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
