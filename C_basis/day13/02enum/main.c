#include <stdio.h>

//�ṩ��һ�鳣���ı������Ա��ڳ��������ɶ�

enum Day  //����ȡ���궨��
{
    Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
};

int main()
{
    printf("Mon = %d\n",Mon);
    printf("Fri = %d\n",Fri);

    enum Day day;

    printf("���������ڣ�");
    scanf("%d",&day);
    switch(day)
    {
        case Mon:
            printf("����������1");
            break;
        case Tue:
            printf("����������2");
            break;
        case Wed:
            printf("����������3");
            break;
        case Thu:
            printf("����������4");
            break;
        case Fri:
            printf("����������5");
            break;
        case Sat:
            printf("����������6");
            break;
        case Sun:
            printf("����������7");
            break;
    }
    return 0;
}
