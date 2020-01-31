#include <stdio.h>

//break switch for
//return

//goto 用于处理，跳出多重循环效率高。goto是短跳转。
//常用于集中式错误处理

int main()
{
Target:
    printf("00000000000\n");
    sleep(1);
    goto Target;
    return 0;
}

int main1()
{
    for(int i=0; i<1; ++i)
    {
        for(int j=0; j<1; j++)
        {
            for(int k=0; k<5; k++)
            {
                printf(" for(int k=0; k<5; k++)\n");
                if(k ==1)
                    return 0;
            }
            printf( "for(int j=0; j<1; j++)\n");
        }
        printf("for(int i=0; i<1; i++)\n");
    }
    return 0;
}
