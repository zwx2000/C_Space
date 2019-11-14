#include <stdio.h>

//我们要的是一个可控的循环,要在while的条件上下功夫
int main()
{
    int count = 0;
    while(count<10)
    {
        printf("%d Hello World!\n", count);
        sleep(1);
        count++;
    }
    return 0;
}
