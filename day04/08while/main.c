#include <stdio.h>

//����Ҫ����һ���ɿص�ѭ��,Ҫ��while���������¹���
int main()
{
    int count = 0;
    while(count<10)
    {
        printf("%d Hello World!\n", count);
        sleep(1);
        count++;
    }
    return 0;
}
