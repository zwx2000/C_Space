#include <stdio.h>

// const constant ȡ���곣��

//const ���εı������Ҫ��ʼ��, ����ص����滻

#define A 100
const int AA = 100; //data ro

int main()
{
    const int mm = 100;
    int *p = &mm;//��ʧ����

    *p = 300;
    printf("%d\n",mm);

    *p = &AA;
    *p = 500;
    printf("%d\n",AA);

    return 0;
}
