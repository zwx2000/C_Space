#include "mystring.h"

int myStrlen(const char *src)
{
    int len = 0;
    while(*src++)
        len++;
    return len;
}

char * myStrcpy(char *dst, const char * src)
{
    char * d = dst;
    while(*dst++ = *src++);
    return d;
}

char * myStrcat(char *dst, const char *src)
{
    char *d = dst;
    while(*dst) dst++;
    while(*dst++ = *src++);
    return d;
}

int myStrcmp(const char *s1, const char *s2)
{
    for(;(*s1&&*s2)&&(*s1 == *s2);s1++,s2++);
    return *s1-*s2;
}
