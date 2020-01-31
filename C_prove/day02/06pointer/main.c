#include <stdio.h>

//指针的本质 有类型的地址。
//指针变量
//int * p; 声明指针 指定大小 类型决定寻址能力

//指针运算 &p[4][2] - a[4][2]  -4

//数值的+1和指针的+1是不一样的

//& * 一级指针(数组名) 到 数组指针之间的切换

int main7()
{
    int a;
    int *p = &a;
    printf("%x, %x\n",p,p+1);
    printf("%x, %x\n",(int)p,(int)p+1);
    printf("%x, %x\n",(void*)p,(void*)p+1);
    return 0;
}

int main()
{
    int a[5]={1,2,3,4,5};
    int *p1 = (int*)(&a+1);
    int *p2 = (int*)((int)a+1);
    printf("%p  %p", p1[-1], *p2);
    return 0;
}

int main5()
{
    int arr[5];

    printf("arr = %p\n", arr);
    printf("arr+1 = %p\n", arr+1);

    printf("&arr = %p\n", &arr);
    printf("&arr+1 = %p\n", &arr+1);

    printf("*&arr = %p\n", *&arr);
    printf("*&arr+1 = %p\n", *&arr+1);

    return 0;
}

int main4()
{
    int *p = (int*)0x0001;
    printf("p   = %p\n", p);
    printf("p+1 = %p\n", p+1);

    int a = 0x0001;
    printf("a   = %x\n", a);
    printf("a+1 = %x\n", a+1);

    return 0;
}

int main3()
{
    int *p = (int*)0x0001;
    printf("%p",p);

    //int *q = p+5;//加的是5个int类型的大小
    int *q = (int*)((int)p +20);
    printf("q = %p\n", q);

    printf("p - q = %2d\n",p-q);
    printf("q - p = %2d\n",q-p);

    printf("p - q = %3d\n",(int)p-(int)q);
    printf("q - p = %3d\n",(int)q-(int)p);

    return 0;
}

int main2()
{
    int data = 0x12345678;
    printf("%p\n", &data);

    int *p = &data;

    printf("%x\n",*((int*)0x0061FEC8));
    printf("%x\n",*(p));

    return 0;
}

int main1()
{
    char *p;
    printf("%d\n", sizeof(p));

    char *pp = malloc(100);
    printf("%d\n", sizeof(pp));

    struct Stu
    {
        char name[1024];
        int age;
    }*ppp;
    printf("%d\n", sizeof(ppp));

    int (*pppp)[1024];
    printf("%d\n", sizeof(pppp));

    return 0;
}
