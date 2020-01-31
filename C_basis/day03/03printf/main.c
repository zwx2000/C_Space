#include <stdio.h>

//printf 中至少有两类， 控制格式，非格式控制字符
//格式控制要求和输出是一一对应的，其他的非格式字符原样输出，非格式字符，提示，显示
int main()
{
    int a = 3;
    printf("Hello World!\n");

    printf("%d\n", a);

    int data = 0x55;
    printf("%#x--%#o--%#d\n", data, data, data);
    printf("%o\n", data);
    printf("%d\n", data);

    float f = 1234.567;

    printf("%f\n", f);
    printf("%g\n", f);
    printf("%e\n", f);

    //当实际宽度大于域宽，按实际输出
    printf("12345678910\n");
    printf("%10d\n", 10);
    printf("%10f\n", 10.01);

    printf("%015d\n", 123456);

    char ch = -1;


    return 0;
}
