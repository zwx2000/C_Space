#include <stdio.h>

//堆内存，可以用于申请大空间 需要手动申请与释放
//malloc 是以字节为单位进行申请
//free

void func()
{
    printf("func:\n");
    char *pa,*pb,*pc,*pd;
    pa = malloc(100);
    pb = malloc(100);
    pc = malloc(100);
    pd = malloc(100);
    printf("%p\n",pa);
    printf("%p\n",pb);
    printf("%p\n",pc);
    printf("%p\n",pd);
}

int main()
{
    printf("main:\n");
    char *pa,*pb,*pc,*pd;
    pa = malloc(100);
    pb = malloc(100);
    pc = malloc(100);
    pd = malloc(100);
    printf("%p\n",pa);
    printf("%p\n",pb);
    printf("%p\n",pc);
    printf("%p\n",pd);
    func();
    return 0;
}


int main1()
{
    char * p = (char*)malloc(1024*1024);
    strcpy(p,"abcd");
    printf("over");
    free(p);

    return 0;
}
