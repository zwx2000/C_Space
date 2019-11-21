#include <stdio.h>

int min = 100;

int main()
{
    int min = 200;
    {
        int min = 300;
    }
    printf("%d\n", min);

    return 0;
}
