#include <stdio.h>

int main()
{
    char ch = -1;   //1111 1111
    short sh = -1;  //1111 1111 1111 1111
    int in = -1;    //FF FF FF FF

    printf("%hhx\n", ch);
    printf("%hx\n", sh);
    printf("%x\n", in);

    printf("%u",(unsigned char)ch); //用无符号解释ch 是255

    for(int i=0; i<10; i++)
    {
        printf("%d\n", i);
    }

    for(int i=0; i<10; i++)
    {
        printf("%c\n", i);
    }

    for(ch = '0'; ch <= '0'; ch++)
    {
        printf("%c", ch);
    }

    for(char ch = '0'; ch<='0'+9; ch++)
    {
        printf("%d\n", ch);
    }

    printf("%d\n", sizeof(0ll));
    printf("%d\n", sizeof(0.0l));
    return 0;
}
