#include <stdio.h>

//float 4   double   8
//int   4   longlong 8

//int long long  float double

int main()  //ǿ������ת��
{
    int a = 10;   //��Ӧ��float ���ȱ��
                  //����ʹ��ǿת
    int b = 3;

    printf("%f\n", (float)a/b);

    return 0;
}

int main3()
{
    int in = 10;       //��С����
    float fl = 3.14;   //ȥ��С�����������ָ�ֵ
    //in = fl;
    fl = in;

    //printf("%d\n", in);
    printf("%f\n", fl);
}

int main2()
{
    //���Ͳ�ƥ�䣬����Ǵ����
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

      //������ʾ��С��Χ���Χ�Ŀռ�ת�����ڷ����������Ϊ����֤�����ݵ���ȷ��
    return 0;
}
