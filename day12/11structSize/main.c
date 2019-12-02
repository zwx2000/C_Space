#include <stdio.h>

#pragma pack(1)

//类型本身是不占用空间的，类型产生的变量才占空间
//结构体忠每个成员的地址都是可以获得的
//1，为什么sex后面空了3个字节，然后再去添age
//2，age后面的num空了两个字节
//3，sex与age间空了3个字节，num应该填在哪个位置

//用多个机器周期去都一个变量，这种现象造成的原因，就是内存不对齐
//要实现内存对齐，牺牲空间，换取时间
#if 0
pack    n   8       4   m
                    Y = 4 外对齐
        1
        2
        4

                    X   1
                        2
                        4
#endif

typedef struct _staff
{
    char sex;
    int age;
    short num;
}Staff;

int main()
{
    Staff s;
    printf("sizeof(Staff) = %d\n",sizeof(Staff));
    printf("sizeof(s) = %d\n", sizeof(s));

    printf("&s = %p\n",&s);
    printf("&s.sex = %p\n", &s.sex);
    printf("&s.age = %p\n", &s.age);
    printf("&s.num = %p\n", &s.num);
    return 0;
}
