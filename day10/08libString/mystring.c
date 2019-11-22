#include "mystring.h"


int myStrlen(char * str)
{
    int len;
    for(len=0; *str++; len++);
    return len;
}

char * myStract(char *dest, char *src)
{
    char * d = dest; //记录首地址
    while(*dest) dest++;
    while(*dest++ = *src++);
    return d;       //返回首地址
}

char * myStrcpy(char *dest, char *src)
{
    char *d = dest;
    while(*dest++ = *src++);
    return d;
}

int myStrcmp(char *s1, char *s2)
{
    for(;*s1 && *s2;s1++,s2++)
        if(*s1 != *s2)
            break;
    return *s1 - *s2;
}
