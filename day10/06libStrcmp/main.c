#include <stdio.h>
#include <string.h>

#if 0
依次比较字母ASCII的大小

s1 > s2   1
s1 == s2  0
s1 < s2  -1
#endif

#if 0
int myStrcmp(char *s1, char *s2)
{
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 > *s2)
            return 1;
        else if (*s1 < *s2) {
            return -1;
        }
        else {
            s1++;
            s2++;
        }
    }

    if(*s1 == '\0' && *s2 != '\0') {
        return 1;
    }
    else if (*s1 != '\0' && *s2 == '\0') {
        return -1;
    }
    else {
        return 0;
    }

}

int myStrcmp(char *s1, char *s2)
{
    for(;*s1 != '\0' && *s2 != '\0';s1++,s2++)
    {
        if(*s1 != *s2)
            break;
    }
    return *s1 - *s2;
}

int myStrcmp(char *s1, char *s2)
{
    for(;*s1 && *s2;s1++,s2++)
        if(*s1 != *s2)
            break;
    return *s1 - *s2;
}


int myStrcmp(char *s1, char *s2)
{
    for(;*s1 && *s2 && *s1==*s2;s1++,s2++)
    return *s1 - *s2;
}
#endif

//终极版本
//int myStrcmp(char *s1, char *s2)
//{
//    for(;*s1 && *s2;s1++,s2++)
//        if(*s1 != *s2)
//            break;
//    return *s1 - *s2;
//}

int myStrcmp(char *s1, char *s2)
{
    for(;*s1 && *s2 && *s1==*s2;s1++,s2++)
    return *s1 - *s2;
}

int main()
{
    char *s1 = "bhina";
    char *s2 = "bhina";

    int ret = myStrcmp(s1,s2);

    if(ret == 0)
        printf("s1 == s2\n");
    else if(ret>0)
        printf("s1 > s2\n");
    else
        printf("s1 < s2\n");


    return 0;
}
