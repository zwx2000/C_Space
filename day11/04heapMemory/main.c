#include <stdio.h>

//���ڴ棬�������������ռ� ��Ҫ�ֶ��������ͷ�
//malloc �����ֽ�Ϊ��λ��������
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
