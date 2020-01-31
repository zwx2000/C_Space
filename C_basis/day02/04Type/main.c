#include <stdio.h>

//一个八位的空间，如果用来表示无符号数(0-255) unsigned char
//               如果用来表示有符号数(-128-127) char
//               由补码规则决定的范围

//如下的求证方式，得到的是字节数
//我们对其范围的探求，不止于字节数，要得到具体数据范围

//int 基本整型 理想的32位机，地址总线和数据总线应该是32位的

//char  short  int  long  long long
#if 0
1字节 char
0     -255 unsigned char 0     -2^8-1
-128  -127 char          -2^7  -2^7-1

2字节 short
0       -65535            0     -2^16-1
-32768  -32767            -2^15 -2^15-1

4字节 int

      long

      long long
#endif

int main(int argc, char *argv[])
{
    //模子的大小
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
