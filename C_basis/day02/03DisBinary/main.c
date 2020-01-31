#include <stdio.h>

//打印一个数据的二进制

void disBin(char ch)
{
    int i = 8;
    while(i--)
    {
        if((1<<i)&ch)
            printf("1");
        else
            printf("0");

        if(i%4 ==0)
        {
            printf(" ");
        }
    }
    putchar(10);
}

int main()
{
//    char a = 0;
//    disBin(a);
//    char b = 1;
//    disBin(b);
//    char c = 2;
//    disBin(c);
//    char d = 127;
//    disBin(d);
//    char e = -128;
//    disBin(e);
//    char f = -2;
//    disBin(f);
//    char g = -1;
//    disBin(g);

//    disBin(f + b);

    for(char i = -128; i < 127; i++)
    {
        printf("%d --> ", i);
        disBin(i);
    }

    printf("%d --> ", 127); disBin(127);

    return 0;
}
