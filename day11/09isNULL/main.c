#include <stdio.h>

//申请 判空 使用/释放(配对使用) 置空

int main()
{
    char *pc = (char*)malloc(100);
    if(pc == NULL)
    {
        printf("error\n");
        exit(-1);
    }

    strcpy(pc,"abcdefg");
    free(pc);
    pc = NULL;

    return 0;
}
