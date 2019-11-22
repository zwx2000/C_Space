#include <stdio.h>

//再启动进程，通过命令行，传递给进程的参数，即传递main的参数
//arg argument 参数 c count  argc 参数个数
//argv arg 指针数组 v vector 指针向量

//a.out 100

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);
    for(int i=0; i<num; i++)
    {
        printf("***********************\n");
    }
}


int main1(int argc, char *argv[])
{

    for(int i=0; i<argc; i++)
    {
        printf("argv[%d] = %s\n",i, argv[i]);
    }
    return 0;
}
