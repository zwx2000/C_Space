#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//通过二级指针 实现了对数据空间的间接访问 **ppc
//通多二级指针 改变一级指针的指向问题
//通过三级指针 改变二级指针的指向问题
//通过四级指针 改变三级指针的指向问题
//通过n级指针 改变n-1级指针的指向问题

//通过一级指针 可以改变0级内容

int alloc2dSpace(char* *p, int n)
{
    *p = malloc(n);
    if(*p!=NULL)
        return 0;
    else
        return -1;
}

int main()
{
    char *p = NULL;

    int ret = alloc2dSpace(&p,200);
    if(!ret)
    {
        strcpy(p,"china");
        printf("%s\n",p);
    }
}

//void foo(int a)
//{
//    a = 100;
//}

void func(char* *p)
{
    *p = "america";
}

int main4()
{
    char *p = "china";

    func(&p);
    printf("%s\n", p);
    return 0;
}

void foo(int *pa)
{
    *pa = 100;
}

int main3()
{
    int a;
    foo(&a);
    printf("a = %d\n", a);
    return 0;
}

int main2()
{
    char ch = 'm', ch2 = 'n';

    char *pc = &ch;//pc = &ch2 自实现改变指向

    char* *ppc = &pc;

    printf("%c\n",*pc);
    *ppc = &ch2;
    printf("%c\n",*pc);

    return 0;
}

int main1()
{
    char ch = 'm';
    char *pc = &ch;

    printf("*pc = %c\n", *pc);

    printf("&ch = %p pc = %p\n",&ch, pc);

    char* *ppc = &pc;

    printf("&ch = %p, *ppc = %p\n",&ch, *ppc);

    printf("*(*ppc) = %c\n", *(*ppc));

    return 0;
}
