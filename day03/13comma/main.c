#include <stdio.h>
int main()
{
//    10 1+9 2+8 3+7 4+6 5+5
    int i,j;
    for(i=0,j=9; i<=j; i++,j--)
    {
        printf("%d + %d = %d\n", i,j,i+j);
    }
}



int main1()
{
    //逗号运算符优先级很低，低于赋值
    int xx;
    (xx = 1+1),2+1,3+2,4+3,5*5,6*7;

    printf("xx = %d\n", xx);

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    a+b, b+c, c+d;
    return 0;
}
