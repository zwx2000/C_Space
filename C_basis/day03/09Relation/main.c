#include <stdio.h>

//��ϵ���ʽ����������ֻ��1��0���������ж�ʹ��
// = ��ʾ��ֵ�� == ��ʾ���ڣ�ԭ���ǣ���ֵ��ʹ��Ƶ�ʸ���

int main()
{
    int x = 5; int y = 6;

    if(x == y)
    {
        printf("x == y\n");
    }
    else {
        printf(" x != y\n");
    }
}

int main1()
{
    int a = 10;
    int b = 20;

    a>b; a==b; a<b; a!=b; a<=b; a>=b;

    printf("%d\n", a>b);

    if(a>b)
    {
        printf("a > b");
    }
    else
    {
        printf("a <= b");
    }
    return 0;
}
