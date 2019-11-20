#include <stdio.h>

//字符数组和字符串之间相同性质，并不代表字符串可以与任意的字符数组之间划等号

//等价 sizeof(字符数组)的大小 >= sizeof(字符串)的大小 此时不存在等价关系 字符数组 此时只是字符数组而已

int main()
{
    char arr[] = "chinaxxxxxxxxxxxxxxxx"; //自适应

    printf("arr = %s\n", arr);
    return 0;
}
