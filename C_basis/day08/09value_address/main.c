#include <stdio.h>

//ͨ����ֵ�ķ�ʽ���ﲻ���޸ı���a�����ݵ�Ŀ��

void func(int* pa);

int main()
{
    int a = 10;
    func(&a);
    printf("main a = %d     &a = %#x\n",a, &a);

    return 0;
}

void func(int* pa)
{
    (*pa)++;
    //printf("func a = %d\n",*pa);
}
