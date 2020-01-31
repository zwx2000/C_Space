#include <stdio.h>

int main()
{
    int a = 10,b = 2;
    int c = 3,d = 4;
    5<3 ? a : (++c?1:2); //优化行为
    printf("%d\n", c);

    if(5>3)
    {
        printf("a");
    }
    else {
        if(++c)
        {
            printf("1");
        }
        else {
            printf("2");
        }
    }

    return 0;
}
