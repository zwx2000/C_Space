#include <stdio.h>

int main()
{
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d*%d=%d ", j, i, i*j);
        }
        putchar(10);
    }
}

int main1()
{
    for(int j = 0; j < 5; j++)
    {
        for(int i = 0; i < 5; i ++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
