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

    //�ж��Ƿ�Ϊ������
    //����ָ���������м�ɨ��
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
        printf("����\n");
    else
        printf("�ǻ���\n");

    return 0;
}
