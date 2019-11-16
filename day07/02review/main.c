#include <stdio.h>

#if 0
&a   000000000061FE1F    (char  *)000000000061FE1F
&b   000000000061FE1C    (short *)000000000061FE1C
&c   000000000061FE18    (int   *)000000000061FE18
&d   000000000061FE10    (double*)000000000061FE10

指针的本质 有类型(寻址能力)的地址(物理地址8-0 8-f)
#endif

int main()
{
    int data = 0x11223344;

    printf("%p\n", &data);
    printf("%p\n", (char*)data);
    printf("%p\n", (short*)data);
    printf("%p\n", (int*)data);

    printf("%x\n", *(char*)&data);
    printf("%x\n", *(short*)&data);
    printf("%x\n", *(int*)&data);
}

int main1()
{
    char a = 1; short b = 2; int c = 3; double d = 3.4;
    printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(b) = %d\n", sizeof(b));
    printf("sizeof(c) = %d\n", sizeof(c));
    printf("sizeof(d) = %d\n", sizeof(d));

    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));

    printf("&a = %p\n",&a);
    printf("&b = %p\n",&b);
    printf("&c = %p\n",&c);
    printf("&d = %p\n",&d);

    printf("a = %d\n",  *(&a));
    printf("b = %d\n",  *(&b));
    printf("c = %d\n",  *(&c));
    printf("d = %.1f\n",*(&d));
    return 0;
}
