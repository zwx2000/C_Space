#include <stdio.h>

//һ����λ�Ŀռ䣬���������ʾ�޷�����(0-255) unsigned char
//               ���������ʾ�з�����(-128-127) char
//               �ɲ����������ķ�Χ

//���µ���֤��ʽ���õ������ֽ���
//���Ƕ��䷶Χ��̽�󣬲�ֹ���ֽ�����Ҫ�õ��������ݷ�Χ

//int �������� �����32λ������ַ���ߺ���������Ӧ����32λ��

//char  short  int  long  long long
#if 0
1�ֽ� char
0     -255 unsigned char 0     -2^8-1
-128  -127 char          -2^7  -2^7-1

2�ֽ� short
0       -65535            0     -2^16-1
-32768  -32767            -2^15 -2^15-1

4�ֽ� int

      long

      long long
#endif

int main(int argc, char *argv[])
{
    //ģ�ӵĴ�С
    printf("sizeof(char       ) = %d\n", sizeof(char        ));
    printf("sizeof(short      ) = %d\n", sizeof(short       ));
    printf("sizeof(int        ) = %d\n", sizeof(int         ));
    printf("sizeof(long       ) = %d\n", sizeof(long        ));
    printf("sizeof(long long  ) = %d\n", sizeof(long long   ));
    printf("sizeof(float      ) = %d\n", sizeof(float       ));
    printf("sizeof(double     ) = %d\n", sizeof(double      ));
    printf("sizeof(long double) = %d\n", sizeof(long double ));
    return 0;
}
