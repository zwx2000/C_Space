#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * myStrstr(char *str, char *subStr);

int calcStrCountInStr(char *str, char *subStr)
{
    int len = strlen(subStr);
    int count = 0;
    while(str = myStrstr(str,subStr))
    {
        count++;
        str += len;
    }
    return count;
}

//char * myStrstr(char *str, char *subStr)
//{
//    int n = strlen(subStr);
//    if(*subStr)
//    {
//        while(str = strchr(str,*subStr))
//        {
//            if(!strncmp(str,subStr,n))
//                return str;
//            str++;
//        }
//        return NULL;
//    }
//    else
//        return str;
//}

char * myStrstr(char *str, char *subStr)
{
    if(*subStr)
    {
        while(*str)
        {
            for(int n=0; (*str+n) == *(subStr+n); n++)
            {
                if(*(subStr+n+1)=='\0')
                    return str;
            }
            str++;
        }
        return NULL;
    }
    else
        return str;
}

int main()
{
    char str1[] = "abcabcaaaaaaaaaaaaaaa1234abc1234abc5678abc1234";
    char str2[] = "abc";
//    printf("%s\n",strstr(str1,str2));

    int count = calcStrCountInStr(str1,str2);
    printf("count = %d\n",count);

//    char *pr = myStrstr(str1,str2);
//    if(pr)
//        printf("%s\n",pr);
//    else
//        printf("find none");

    return 0;
}
