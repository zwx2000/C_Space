#include <stdio.h>

int main()
{
#if 0
    int a = 4;
    int b = 5;

    //��Ȼ�ļ�� �ո� Tab Enter Enter������ ��ʽ���ͱ�����ı�����һһ��Ӧ
    //�Ǹ�ʽ������Ҫԭ������ %c ����г���2��%c�������
    printf("���������a��b��ֵ��");
    scanf("%d%d",&a,&b);

    int sum = a + b;
    printf("sum = %d\n", sum);

    int fData;

    scanf("%d", &fData);
    printf("%d", fData);

    char aa = 'a';
    char bb = 'b';
    scanf("%c%c", &aa, &bb);
    printf("%c %c\n",aa,bb);
#endif

    char ch;
    //ch = getchar();
    printf("aaaaaaaaaaa");
    putchar(10);
    printf("bbbbbbbbbbb");
    return 0;
}
