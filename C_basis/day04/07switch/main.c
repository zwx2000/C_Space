#include <stdio.h>

//switch�б��ʽ�����͵ı��ʽ
//breakЭ����ɶ�·ѡһ
//case�������ͳ������ʽ

//����switch ���Ż���������ѡ����������ǰ��


int main()
{
    int choice;

    printf("pls input your choice:");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("HHKB Professional Keyboard\n");
            break;
        case 2:
            printf("Best chair\n");
            break;
        case 3:
            printf("Samsung screen\n");
            break;
        case 4:
            printf("����Ա����ʦ\n");
            break;
        default:
            printf("лл����\n");

    }
    return 0;
}
