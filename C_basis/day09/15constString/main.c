#include <stdio.h>

//字符串，是由双引号 引起的一串字符
//系统在字符串的最后添加一个'\0'

//C语言，是如何处理常量字符串的
//将其处理为一个指向data字符串的首地址
//对比数组 三要素：起始地址，步长，范围
//char* 能不能代表了整个字符串，起始地址，步长，'\0'
#if 0
stack

heap
data （全局变量 static 局部变量 常量）
text
#endif


int main()
{
    printf("sizeof(\"china\") = %d\n", sizeof("china"));

    printf("%s", "china");

    char *p = "china"; //可能存在某种等价关系

    printf("p = %p p+1 = %p p[0] = %c 0[p] = %c\n", p, p+1, p[0], 2[p]);

    printf("  = %p  +1 = %p      = %c 0[p] = %c\n", "china", "china"+1, "china"[0], 2["china"]);

    return 0;
}
