#include <stdio.h>

//if switch while do while for   {}

int main()
{
    //while do while for 循环三要素 循环变量初始化 循环终止条件 趋于循环结束的变化

    //while /do while
    //
//    int sum = 0;
//    while(i<101)
//    {
//        sum += i;
//        i++;
//    }

//    do
//    {
//        sum += i;
//        i++;
//    }while(i<101);

//  for(;;) ==  while(1)

//    for(int i=0; i<101; i++)
//        sum += i;
//    printf("poooooooooooo\n");


//    printf("sum = %d\n", sum);

    for(int i=1; i<8; ++ i)
    {
        for(int j=1; j<7; ++ j)
        {
            if((i+j)==5)
                printf("*");
            else
                printf(" ");
        }
        putchar(10);
    }

    return 0;
}
