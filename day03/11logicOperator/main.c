#include <stdio.h>

// && 将两侧的操作数，逻辑化，0为假，非0为真
// ||
// !  真假的对立面，注意优先级很高
// 短路

//(-oo, -5] U [5, +oo)
int main()
{
    int a = 44; int b = 55;
    if((a<40) && (b = 66))
    {
        printf("xxxxxb = %d\n", b);
    }
    else
    {
        printf("ooooob = %d\n", b);
    }
    return 0;
}

int main3()
{
    int a = 44;
    int b = 55;
    if((a>40) || (b = 66)) // ‘||’运算前一个为真则后面不计算
    {
        printf("b = %d\n", b);
    }
    else
    {
        printf("b = %d\n", b);
    }
}

int main2()
{
    for(int i=0; i<100; i++)
    {
        if(!(i%3))
        {
            printf("%d\n", i);
        }
    }
}

int main1()
{
    if(!5)
    {
        printf("xxxxxxxxx");
    }

    int a = 3;
    int b = 5;
    if((a<b)&&(a-a))
    {
        printf("xxxx\n");
    }
    else
    {
        printf("oooo\n");
    }
    return 0;
}
