#include <stdio.h>

int main()
{
    //主对角线和此对角线纯输出
    int a[4][4] = {1,1,1,1,
                   2,2,2,2,
                   3,3,3,3,
                   4,4,4,4};

//    for(int i=0; i<4; i++)
//    {
//        for(int j=0; j<4; j++)
//        {
//            if(i==j)
//            {
//                int t = i;
//                while(t--)
//                    printf("   ");
//                printf("%d\n", a[i][j]);
//            }
//        }
//        putchar(10);
//    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
                printf("%d%d ", i, j);
        }
        putchar(10);
    }

    for(int i=0; i<4; i++)
    {
        int t = 3-i;
        while(t--)
            printf("   ");
        printf("%d\n", a[i][3-i]);
    }


    return 0;
}
