#include <stdio.h>

//[5,100) (-oo,-5)U[5,+oo)
// &&          ||

int main()
{
    int val;

    scanf("%d", &val);

//    if(5 <= val && val < 100)
//    {
//        printf("在范围以内\n");
//    }
//    else {
//        printf("不在范围以内\n");
//    }

    if(val <= -5 || val >= 5)
    {
        printf("在范围以内\n");
    }
    else {
        printf("不在范围以内\n");
    }

    return 0;
}
