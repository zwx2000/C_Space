#include <stdio.h>

int main()
{
#if 0
    int a = 4;
    int b = 5;

    //天然的间隔 空格 Tab Enter Enter结束， 格式串和被输入的变量，一一对应
    //非格式串，需要原样输入 %c 如果有超过2个%c，留间隔
    printf("请输入变量a和b的值：");
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
