#include <stdio.h>

//C���Զ�������Ĵ�������ָ��
//���ڽṹ�壬����Ҳ�Ƽ���ָ��


//���κͷ��صı��ʾ���һ�θ�ֵ

typedef struct _myComplex
{
    float real;
    float image;
}MyComplex;

//ʵ��һ��������ʵ�������������

MyComplex addMyComplex(MyComplex *x, MyComplex *y)
{
    MyComplex t;
    t.real = x->real+y->real;
    t.image = x->image+y->image;
    return t;
}

int main()
{
    MyComplex c1 = {1,2};
    MyComplex c2 = {3,4};

    MyComplex retc = addMyComplex(&c1,&c2);

    printf("(%.2f,%.2f)\n",retc.real,retc.image);
    return 0;
}
