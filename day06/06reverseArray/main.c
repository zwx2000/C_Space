#include <stdio.h>

int main()
{
    char arr[4][4] = {
        'a','b','b','b',
        'c','a','b','b',
        'c','c','a','b',
        'c','c','c','a'};

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
                printf("%2c", arr[i][j]);
        }
        putchar(10);
    }

    char t;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i>j)
            {
                t = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = t;
            }
        }
        putchar(10);
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
                printf("%2c", arr[i][j]);
        }
        putchar(10);
    }
    return 0;
}
