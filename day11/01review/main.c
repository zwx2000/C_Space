#include <stdio.h>
#include <string.h>

#if 0
什么是常量字符串？
"abcd"
C语言如何处理常量字符串
C语言将常量字符串存储于data rodata，处理为一个指向该段的指针
char *p = "abcd";

不可更改
char arr[] = "china";
sizeof(arr) sizeof("china") arr=1 "china"+1

字符串放到字符数组中的等价关系
sizeof(数组的大小) >= sizeof(字符串的大小)
char arr[] = "china"; arr = "china";

字符串求长，拼接，拷贝，比较 多次参加考试
原生
用库函数
           strlen sizeof()
"china"       5       6
p             5       4
arr           5       10

abcd0
efgh0

拼接、拷贝 待拼接源和拷贝源，要有足够的空间接纳新元素

#endif

int main()
{
    strcmp();
}

int main3()
{
    char *c1 = "america"; char *c2 = "china";
    strcpy(c1,c2);//常量不可更改

    char arr1[] = "china"; char arr2[] = "china";
    printf("%s\n",arr1);
    strcpy(arr1,arr2);//8个拷到6个
    printf("%s\n", arr1);
}

int main2()
{
    char *p1 = "abcd"; char *p2 = "efgh";
    strcat(p1,p2);
    char arr1[] = "abcd"; char arr2[] = "efgh";
    strcat(arr1,arr2);
    return 0;
}

int main1()
{
    printf("%s\n", "china");
    char *p = "china";
    printf("%s\n", p);
    char arr[10] = "china";
    printf("%s\n",arr);
    return 0;

}
