#include <stdio.h>

//const 增加了程序的健壮性

char * myStrcpy(char *dest, const char *src)
{
    char *d = dest;
    while(*dest++ = *src++);
    return d;
}

int main()
{
    printf("Hello World!\n");
    return 0;
}
