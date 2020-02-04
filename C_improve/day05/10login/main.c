#include <stdio.h>

//去除fei'k非可见字符，以空格为代表，去除空格
//a  b  c

void trimStrRightSpace(char *str)
{
    while(*str) str++;
    while(*(--str) == ' ')
        *str = '\0';
}

void trimStrLeftSpace(char *str)
{
    if(*str != ' ')
        return;
   char *t = str;
   while(*t == ' ')
       t++;
   while(*str++ = *t++);
}

void trimStrAllSpace(char *str)
{
    char * t = str;
    while(*t)
    {
        if(*t != ' ')
            *str++ = *t;
        t++;
    }
    *str = '\0';
}

int main()
{
    char buf[1024] = "   chi  na   ";
    printf("***%s***\n",buf);

//    trimStrRightSpace(buf);
//    printf("***%s***\n",buf);

//    trimStrLeftSpace(buf);
//    printf("***%s***\n",buf);

    trimStrAllSpace(buf);
    printf("***%s***\n",buf);

    return 0;
}

int main1()
{
    FILE *pf = fopen("login.conf","r");

    char name[100];

    fgets(name,100,pf);

    if(strcmp(name,"wangguilin"))
        printf("登录\n");
    else
        printf("非法\n");
    return 0;
}
