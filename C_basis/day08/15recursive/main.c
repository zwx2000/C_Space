#include <stdio.h>

//ֱ�ӻ��Ǽ�ӵ����Լ������Σ��ͽеݹ���� recursive
//�ݹ飬�ǱȽϽӽ���Ȼ�������Ե�һ�ֵ��÷�ʽ���ݹ����Ҫ�к���ĳ��ڣ���Ȼ��ҵ�

//�ݹ���ʼ���� getAge(n) ��ʹ�ݹ����ڽ��������getAge(--n) �ݹ���ֹ����n==1

//int getAge(int n)
//{
//    if(n==1)
//        return 10;
//    else
//        return getAge(--n)+2;
//}

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int fac = factorial(3);
    printf("%d\n", fac);
}

////���ӳ���������
//int peachCount(int day)
//{
//    if(day == 10)
//        return 1;
//    else
//        return (peachCount(++day)+1)*2;
//}

//int main()
//{
////    int age = getAge(5);
////    printf("age = %d\n", age);

//    int CountOfPeach = peachCount(1);

//    printf("count = %d\n", CountOfPeach);
//    return 0;
//}
