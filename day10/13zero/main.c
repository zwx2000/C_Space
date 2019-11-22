#include <stdio.h>

#if 0
int 0
float 0.0
* NULL 标识未初始化的指针，代表内存的零地址
char  '\0'  用于标识字符串结束的标志

char '0'
“0”  '0'+'\0'

#endif

int main()
{
    printf("int %d\n",0);
    printf("float %d\n",0.0);

    printf("'0' = %d %c\n",'0','0');

    printf("NULL = %p  NULL = %d\n", NULL, NULL);

    printf("\\0=%d  \\0=%c",'\0','\0');

    return 0;
}
