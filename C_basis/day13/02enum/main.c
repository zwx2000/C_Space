#include <stdio.h>

//提供了一组常量的别名，以便于程序清晰可读

enum Day  //可以取代宏定义
{
    Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
};

int main()
{
    printf("Mon = %d\n",Mon);
    printf("Fri = %d\n",Fri);

    enum Day day;

    printf("请输入星期：");
    scanf("%d",&day);
    switch(day)
    {
        case Mon:
            printf("今天是星期1");
            break;
        case Tue:
            printf("今天是星期2");
            break;
        case Wed:
            printf("今天是星期3");
            break;
        case Thu:
            printf("今天是星期4");
            break;
        case Fri:
            printf("今天是星期5");
            break;
        case Sat:
            printf("今天是星期6");
            break;
        case Sun:
            printf("今天是星期7");
            break;
    }
    return 0;
}
