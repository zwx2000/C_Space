#include <stdio.h>

//���� �п� ʹ��/�ͷ�(���ʹ��) �ÿ�

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
