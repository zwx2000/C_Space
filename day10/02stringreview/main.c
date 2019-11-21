#include <stdio.h>

//常量字符串，双引号引起的一串字符，自动追加了'\0'
//32-127 可打印字符
//大小 存储 进程空间的data rodata
//C语言如何处理常量字符串,将其编译为一个指向rodata 一串字符的首地址
//这个首地址能代表字符串吗？
//数组三要素： 首地址+步长+范围(自动追加了'\0')

//通过字符指针的方式，可以使用常量字符串，但是不能修改
//里面的内容

//char arr[6] = "china"; 将data段的rodata的一串字符 拷贝到了arr代表的字符串中

//此时操作字符数组，就等价于操作一个字符串，并且可以修改

//是不是随便一个字符串都可以放到字符数组中去呢?
//等价 sizeof(字符数组的) >= sizeof(字符串的大小) 自适应

//综上所述 对应于一个字符串的处理 就变成了对字符指针，或是对字符数组的处理
//下面要研究的，一堆字符在一起构成的数据形态。

int main()
{
    //大小、步长
    char arr[6]; //"china"

    printf("sizeof(arr) = %d\t", sizeof(arr));
    printf("sizeof(\"chian\") = %d\n", sizeof("china"));

    printf("arr = %p arr+1 = %p\n", arr, arr+1);
    printf("\"china\" = %p \"china\"+1 = %p\n", "china", "china"+1);
}

int main1()
{
//    int 1001; char 'x'; float 2.13;
//    printf("%d\n", NULL);

    char *p = "c0hina";

    printf("%s\n", p);
    printf("%s\n", "c0hina");
    return 0;
}
