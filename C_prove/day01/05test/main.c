#include <stdio.h>

void disBin(int d)
{
    int i=32;
    while(i--)
    {
        if((1<<i)&d)
            printf("1");
        else
            printf("0");

        if(!(i%8))
            putchar(' ');
    }
    putchar(10);
}

int main()
{
    for(int i=0; i<300; i++)
    {
        disBin(-i);
    }
    return 0;
}
