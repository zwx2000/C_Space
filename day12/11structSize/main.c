#include <stdio.h>

#pragma pack(1)

//���ͱ����ǲ�ռ�ÿռ�ģ����Ͳ����ı�����ռ�ռ�
//�ṹ����ÿ����Ա�ĵ�ַ���ǿ��Ի�õ�
//1��Ϊʲôsex�������3���ֽڣ�Ȼ����ȥ��age
//2��age�����num���������ֽ�
//3��sex��age�����3���ֽڣ�numӦ�������ĸ�λ��

//�ö����������ȥ��һ������������������ɵ�ԭ�򣬾����ڴ治����
//Ҫʵ���ڴ���룬�����ռ䣬��ȡʱ��
#if 0
pack    n   8       4   m
                    Y = 4 �����
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
