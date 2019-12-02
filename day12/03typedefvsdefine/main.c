#include <stdio.h>

#if 0

typedef typername

1,用现有类型生成变量
2,在变量定义之前加typedef
3,将定义的变量换成你要的别名

typedef 构成的C语言语句参与编译
#define 构成的语句，在预处理阶段处理完毕

#endif

malloc(size_t);

int main()
{
    char *p,q;
    printf("sizeof(p) = %d sizeof(q) = %d\n", sizeof(p), sizeof(q));

    typedef char *pChar;

    pChar a,b;

    printf("sizeof(a) = %d sizeof(b) = %d\n", sizeof(a), sizeof(b));

#define DpChar char *

    DpChar m,n;
    printf("sizeof(m) = %d sizeof(n) = %d\n", sizeof(m), sizeof(n));


    return 0;
}
