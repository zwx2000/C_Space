#include <stdio.h>

//[5,100) (-oo,-5)U[5,+oo)
// &&          ||

int main()
{
    int val;

    scanf("%d", &val);

//    if(5 <= val && val < 100)
//    {
//        printf("�ڷ�Χ����\n");
//    }
//    else {
//        printf("���ڷ�Χ����\n");
//    }

    if(val <= -5 || val >= 5)
    {
        printf("�ڷ�Χ����\n");
    }
    else {
        printf("���ڷ�Χ����\n");
    }

    return 0;
}
