#include <stdio.h>

//float 4   double   8
//int   4   longlong 8

//int long long  float double

int main()  //强制类型转换
{
    int a = 10;   //本应是float 设计缺陷
                  //所以使用强转
    int b = 3;

    printf("%f\n", (float)a/b);

    return 0;
}

int main3()
{
    int in = 10;       //加小数点
    float fl = 3.14;   //去除小数，整数部分赋值
    //in = fl;
    fl = in;

    //printf("%d\n", in);
    printf("%f\n", fl);
}

int main2()
{
    //类型不匹配，输出是错误的
    float f = 3.4;
    int i = 5;

    //printf("sizeof(f+i) = %d\n", sizeof(f+i));
    printf("f + i = %d\n", f+i);
    printf("f + i = %f\n", f+i);
    return 0;
}


int main1()
{
    //integer promotion
    //char short int  char + char / char + short / char + int / short + int

    char ch; short sh; int in;

    printf("sizeof(ch)    = %d\n", sizeof(ch));
    printf("sizeof(ch+ch) = %d\n", sizeof(ch +ch));

    printf("sizeof(sh)    = %d\n", sizeof(sh));
    printf("sizeof(ch+sh) = %d\n", sizeof(ch +sh));

    printf("sizeof(ch+in) = %d\n", sizeof(ch+in));
    printf("sizeof(sh+in) = %d\n", sizeof(sh +in));

//    ch = 127;
//    in = ch;

//    printf("ch = %d\n", ch);
//    printf("in = %d\n", in);

      ch = -1;
      in = ch;

      printf("ch = %d\n", ch);
      printf("in = %d\n", in);

      //整型提示，小范围向大范围的空间转，由于符号扩充的行为，保证了数据的正确性
    return 0;
}
