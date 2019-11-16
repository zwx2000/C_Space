#include <stdio.h>

int main()
{
//    char *p = 0x0001;
//    int  *q = 0x0001;

//    if(p == q)
//        printf(" == \n");
//    else
//        printf(" != \n");

//    int *p, *q;
//    int data = 100;

//    p = &data;
//    data += 200;
//    q = &data;

//    if(p==q)
//    {
//        printf("p==q\n");
//    }

    //判断是否为回文数
    //两个指针两端向中间扫描
    char name[5] = {'m', 'a', 'd', 'a', 'm'};
    char *ph = &name[0];
    char *pt = &name[4];

    int flag = 1;
    while(ph<pt)
    {
        if(*ph == *pt)
        {
            ph++;
            pt--;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("回文\n");
    else
        printf("非回文\n");

    return 0;
}
