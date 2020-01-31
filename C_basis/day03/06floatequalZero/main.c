#include <stdio.h>

//请写一段小程序，比较浮点数和零的值的大小

int main()
{
#if 0
    float data = 0.0;

    if(data == 0.0)
    {
        printf("equal\n");
    }
    else {
        printf("not equal\n");
    }
#endif
    double tmp = 0.3;//0.3 0.299999   0.7  0.699999

    //0.3 0.299999 0.300001
    //修正值
    printf("%d\n", (int)((tmp+0.000001)*10));

    if(tmp>-0.000001 && tmp < +0.000001)
    {
        printf("tmp == 0\n");
    }
    else {
        printf("tmp != 0\n");
    }

    return 0;
}
