#include <stdio.h>

//变量的本质，实质就是一段内存空间的别名
//变量取名，组成，数字0-9，字母a-z，A-Z，下划线 _
//不以数字开头， 避讳，区分大小写

//取名讲究*见名知义*

//ctrl+A + ctrl+I 自动对齐
//ctrl+‘/’ 注释

//myFirstName , my_first_name 驼峰命名法

int main(int argc, char *argv[])
{
    int a = 4;
    int b = 5;

    printf("a = %d  b = %d\n", a, b);

//    int t;
//    t = a;
//    a = b;
//    b = t;

//    a = a + b;  //a=4 b=5   a=9 b=5
//    b = a - b;  //a=9 b=5   a=9 b=4
//    a = a - b;  //a=9 b=4   a=5 b=4

    a = a^b;
    b = a^b;
    a = a^b;

    printf("a = %d  b = %d\n", a, b);



    return 0;
}
