#include <stdio.h>

//C++完全兼容C语言 再指针赋值上要做到显示

//算术运算
//pp + 1 == pp +sizeof(int)
//关系运算

int main()
{
    int *p;
    char *q;
    p = (int*)q;

    int *pp = 0x0001;
    pp+1;
    int *qq = 0x0005;

    if(pp+1 == qq)
        printf("==\n");
    if(pp-qq == 1)
        printf("==\n");
    return 0;
}
