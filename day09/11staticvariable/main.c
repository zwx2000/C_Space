#include <stdio.h>

//static ���ξֲ�������Ĭ�ϳ�ʼ��Ϊ��
//auto   ���εľֲ��������洢��ջ�ϣ������濪�����꼴��
//static ���εľֲ�������data���������ڵ�ͬ�ڽ���
//static �����ĳ�ʼ��ִֻ��һ��

//����ִ�д�������¼��ӡĳ�����ĵ��ô���
void print(int num, int age, char sex, float score)
{
    static int flag = 1;
    if(flag == 1)
    {
        printf("num\tage\tsex\tscore\tidx\n");
        flag = 0;
    }
    static int count = 0;
    printf("%d\t%d\t%d\t%.2f\t%d\n", num, age, sex, score, ++count);
}

int main()
{
    print(1001,21,'x',99);
    print(1001,23,'x',99);
    print(1003,26,'x',99);
    print(1001,21,'x',88);
    print(1001,21,'x',99);
    print(1001,21,'x',99);
    print(1001,21,'x',99);
    print(1001,21,'x',99);
}


#if 0
void func()
{
    int a = 1;
    printf("a = %d\t", a++);

    static int b = 1;
    printf("b = %d\n", b++);

    printf("+++++++++++++++\n");
}

int main()
{
    for(int i=0; i<10; i++)
    {
        func();
    }
    return 0;
}
#endif
