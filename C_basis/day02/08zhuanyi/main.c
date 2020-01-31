#include <stdio.h>

//字符语义被征用，回归本义
//有新的需求，通过转义实现新的功能
int main(int argc, char *argv[])
{

    printf("I like \"football\" \n");
    printf("I like 'football'   \n");
    printf("I \t like 'football'   \n");

    printf("I like \\football\\ \n");

//  printf("%d",10); //%10
    printf("%% %d", 10);

    //"本身就是一个双引号字符，但是他被C语言征用了其他的用途
    //n本身就是一个字符，但是呢，C语言想实现一个换行的功能。

    printf("%d %d %d %d", '\n', '\t', '\b', '\r');

    printf("%% = %d %% = %d", '%', '%%');

    printf("\\= %d \\ = %d", '\\', '\\');

    printf("i like \xa fnumber restroom");
    return 0;
}
