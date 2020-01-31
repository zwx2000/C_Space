#include <stdio.h>

//内存泄漏

//malloc free要求配对使用 malloc多于free 必然会导致泄漏
//free 多于

int main()
{
    while(1)
    {
        char *p = (char*)malloc(100);
    }
    return 0;
}
