#include <stdio.h>

//ȥ��fei'k�ǿɼ��ַ����Կո�Ϊ����ȥ���ո�
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
        printf("��¼\n");
    else
        printf("�Ƿ�\n");
    return 0;
}
