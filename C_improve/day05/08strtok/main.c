#include <stdio.h>
#include <string.h>

//strtok里面有一个静态变量，用于记录待分割字符串的地址

int main()
{
    char buf[] = "name:zhangsan:password:111111:sex:x:address:guangzhoutianhe";

    int n = sizeof(buf);
    for(int i=0; i<n; i++)
    {
        printf("%c",buf[i]);
    }
    putchar(10);
    char *p = strtok(buf,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c",buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    for(int i=0; i<n; i++)
    {
        printf("%c", buf[i]);
    }
    putchar(10);

    p = strtok(NULL,":");
    printf("%s\n",p);
    if(p==NULL)
        printf("分割完毕\n");
//    for(int i=0; i<n; i++)
//    {
//        printf("%c", buf[i]);
//    }


    return 0;
}
