#include <stdio.h>

//指针数组的本质是数组，数组指针的本质是指针

int main()
{
    char *pa = "china", *pb = "america", *pc = "canada", *pd = "japan";

}

int main1()
{
    int arr[] = {1，2，3，4，5}; //整型数组
    char cArr[] = {'a', 'b', 'c', 'd', 'e'}; //字符数组

    int a,b,c,d;
    int* ipArr[] = {&a,&b,&c,&d}; //{int*,int*,int*,int*} 整型指针数组


    char aa, bb, cc, dd;
    char* cpArr[] = {&aa,&bb,&cc,&dd}; //{char*,char*,char*,char*}字符指针数组

    return 0;
}
