#include <stdio.h>

//����������ȼ�������ԣ��ҽ�ϣ�����Ŀ
//�����������������һ�ּ�����Ҫ
int main()
{
    int a = 2;
    int b = 3;

//    a = a + b;

//    a += b; //a = a+b
//    printf("a = %d\n", a);

//    float priceOfNormalWorld = 34.5;
//    priceOfNormalWorld += 10;

    a *= b+4;  //a=a*(b+4)

    printf("a = %d\n", a);
}

int main1()
{
#if 0
    int a;
    int b;
    int sum;
    sum = a+b;
    sum = (a+b) * (a+b);
#endif

    int a, b, c, d, e;

    a = b = c = d = e = 5;

    printf("a = %d b = %d c = %d d = %d e = %d\n",a,b,c,d,e);

    //�κα��ʽ����ֵ��
    c = (a=b) + (b=c); //'=' ��ֵ�� ���ǵȺ� ��������
    printf("%d\n",c);
    printf("%d", a=b);


    a++;//��Ŀ
    a+b;//˫Ŀ
    a>b?c:d; //��Ŀ a>b��һ�����ʽֵ Ҳ����1��0�滻

    return 0;
}
