#include <stdio.h>

//��������أ����ﾳ���������������

int main()
{
    int data;
    int *pd = &data; //������������

    *pd = 200;       //������ ȡ����

    char * p, * q; //int a,b;

    printf("sizeof(p) = %d  sizeof(q) = %d\n", sizeof (p), sizeof (q));

    return 0;
}
