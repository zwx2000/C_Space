#include <stdio.h>

//1,把一类功能函数写到一个xxx.c里面
//2,把xxx.c中所有的函数声明写到xxx.h中去
//3,在xxx.h中加入,避免头文件重复包含的语句
//4,将xxx.h 包含到xxx.c中去 自包含 自实现的用“”
//5,在main函数中 包含xxx.h 谁用谁包含

//注释 1.实现 2.声明 3.把一作成库，libmystr.so 给别人提供mystring.h就可以了
//libc.so  stdio.h  string.h  stdlib.h time.h

int main()
{
    char *s1 = "abc"; char *s2 = "abc";
    int ret = myStcmp(s1,s2);

    if(ret == 0)
        printf("==");
    return 0;
}
