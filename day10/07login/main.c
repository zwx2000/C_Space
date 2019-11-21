#include <stdio.h>

int main()
{
    char name[100] = {0};
    char passwd[100] = {0};

    int count = 3;

    while(1)
    {
        printf("您目前还有%d次机会\n",count);
        printf("Name:");
        scanf("%s",name);
        printf("Passward:");
        scanf("%s",passwd);

        if(strcmp(name,"guilin")==0 && strcmp(passwd,"123456")==0)
            break;
        else
        {
            count--;
            if(count == 0)
                exit(-1);
        }
    }

    printf("欢迎登陆！\n");
    return 0;
}
