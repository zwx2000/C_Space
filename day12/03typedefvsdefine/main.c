#include <stdio.h>

#if 0

typedef typername

1,�������������ɱ���
2,�ڱ�������֮ǰ��typedef
3,������ı���������Ҫ�ı���

typedef ���ɵ�C�������������
#define ���ɵ���䣬��Ԥ����׶δ������

#endif

malloc(size_t);

int main()
{
    char *p,q;
    printf("sizeof(p) = %d sizeof(q) = %d\n", sizeof(p), sizeof(q));

    typedef char *pChar;

    pChar a,b;

    printf("sizeof(a) = %d sizeof(b) = %d\n", sizeof(a), sizeof(b));

#define DpChar char *

    DpChar m,n;
    printf("sizeof(m) = %d sizeof(n) = %d\n", sizeof(m), sizeof(n));


    return 0;
}
