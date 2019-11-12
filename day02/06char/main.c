#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned char ch;

    for(ch=0; ch<128; ch++)
    {
        printf("%3d->> %c", ch, ch);
        if(ch % 32 == 0)
        {
            putchar(10);
        }
    }

    printf("\n\n\n===============================\n\n\n");

    for(char ch1 = 'a'; ch1 <= 'z'; ch1++)
    {
        printf("%3d->>%c  ", ch1, ch1);
    }

    putchar(10);

    if('a' == 97)
    {
        printf("\'a\' == 97");
    }

    return 0;
}
