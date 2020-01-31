#include <stdio.h>
#include <string.h>

//连接两个字符串
//被链接的串必须要有足够的空间
//返回char* 是为了实现链式表达
//典型的造轮子。

char * myStract(char *dest, char *src)
{
    char * d = dest; //记录首地址
    while(*dest) dest++;
    while(*dest++ = *src++);
    return d;       //返回首地址
}

int main()
{
    char firstName[30] = "Jim";
    char lastName[30] = "Green";
    char middleName[30] = "---";


//    char *p, *q;
//    p = firstName; q = lastName;
//    while(*p) p++;

//****V1****
//    while(1)
//    {
//        *p = *q;
//        if(*p == '\0')
//            break;
//        p++;
//        q++;
//    }

//****V2****
//    while(1)
//    {
//        if((*p = *q) == '\0')
//            break;
//        p++;
//        q++;
//    }

//****V3****
//    while(*p = *q)
//    {
//        p++;
//        q++;
//    }

//****V4****
//    while(*p++ = *q++);

//    strcat(firstName,lastName);

    myStract(myStract(firstName,middleName),lastName);
    printf("%s\n", firstName);

    return 0;
}
