#include <stdio.h>
#include <string.h>

int caloChCountInStr(char *buf,char ch)
{
    int count = 0;
    while(buf = strchr(buf,ch))
    {
        count++;
        buf++;
    }
    return count;
}

int main()
{
    char buf[1024] = "aaaaaaaaafbbbbbbbbbcccccccccccfdddddddddeeeeeffggggggggg";

    int count = caloChCountInStr(buf,'f');
    printf("Count = %d\n",count);
    return 0;
}

#if 0
char * myStrchr(char *str, char ch)
{
    while(*str)
    {
        if(*str==ch)
            return str;
        str++;
    }
    return NULL;
}

int main()
{
    char str[1024] = "Great Wall";
    char ch = ' ';

    printf("%s\n",myStrchr(str,ch));
    return 0;
}
#endif
