#include <stdio.h>

//直接或是间接调用自己的情形，就叫递归调用 recursive
//递归，是比较接近自然语言特性的一种调用方式。递归必须要有合理的出口，不然会挂掉

//递归起始条件 getAge(n) 有使递归趋于结束的语句getAge(--n) 递归终止条件n==1

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

////猴子吃桃子问题
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
