#include <stdio.h>
#include <time.h>

int main()
{
    double data = 9.0;
    double root = sqrt(data);
    printf("%f\n", root);

    double power = pow(data,3);
    printf("%f\n", power);

    printf("%f\n", ceil(3.14));//����ȡ��
    printf("%f\n", floor(3.14));//����ȡ��


    return 0;
}
