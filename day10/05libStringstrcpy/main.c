#include <stdio.h>
#include <string.h>

//strlen strcat strcpy strcmp

//strcpy 被拷贝的区域，必须有足够的空间容纳
//先拷贝，再判断，再加加

char * myStrcpy(char *dest, char *src)
{
    char *d = dest;
    while(*dest++ = *src++);
    return d;
}

int main()
{
    char name[200] = {0};
    char *pName = "china";
    char name2[200];
    myStrcpy(name,myStrcpy(name2, pName));
    printf("name2 = %s\n",name2);
    printf("name  = %s\n",name);

    return 0;
}
