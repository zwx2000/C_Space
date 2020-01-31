#include <stdio.h>

//switch中表达式，整型的表达式
//break协助完成多路选一
//case中是整型常量表达式

//关于switch 的优化，把容易选择的项放在最前面


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
            printf("程序员鼓励师\n");
            break;
        default:
            printf("谢谢参与\n");

    }
    return 0;
}
