#include <stdio.h>

//C语言对于数组的处理，就是指针
//对于结构体，我们也推荐传指针


//传参和返回的本质就是一次赋值

typedef struct _myComplex
{
    float real;
    float image;
}MyComplex;

//实现一个函数，实现两个复数相加

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
