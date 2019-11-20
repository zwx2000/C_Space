#include <stdio.h>

//寻求改变内容,要改变这些面的数据
//正是因为字符数组和字符串他们具有相同的性质
//所以为了要改变字符串的内容，通常将字符串拷贝字符数组中去

//arr[6]是栈上的空间 "china"是data 一块常量区域


int main()
{
    char arr[6] = "china"; //他们之间存在着某种等价关系

    printf("sizeof(arr)     = %d\tarr = %p\tarr+1 = %p\n", sizeof(arr), arr, arr+1);
    printf("sizeof(\"china\") = %d \"china\" = %p \"china\"+1 = %p\n", sizeof("china"), "china", "china"+1);

    printf("arr = %s\n", arr);
    printf("\"china\" = %s\n", "china");

}

//int main()
//{
//    char *p = "china";

////    printf("%c\n", p[2]);
////    p[2] = 'i';

//    return 0;
//}
