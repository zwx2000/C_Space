#include <stdio.h>

//筛子,提前结束当前循环进入下一轮循环
//while()
//{
//    if()
//    {
//        continue
//    }
//}

int main()
{
    for(int i=0; i<100; i++)
    {
        if(i%3 != 0)
            continue;

        printf("%d\n", i);
    }
    return 0;
}
