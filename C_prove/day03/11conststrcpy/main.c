#include <stdio.h>

//const �����˳���Ľ�׳��

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
