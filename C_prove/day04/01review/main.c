#include <stdio.h>

//ָ�� ����ֵ  ������()
//��ָ��


//*********
//*********
//*********

void func(int **p)
{
    *p=100;
}

int main()
{
    int a;
    int *p = &a;
    func(p);
    printf("a = %d\n", a);
    return 0;
}


#if 0
void func(int* pa)
{
    *pa = 200;
}

int main()
{
    int a = 10;
    func(&a);
    return 0;
}
#endif
