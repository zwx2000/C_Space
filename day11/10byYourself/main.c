#include <stdio.h>

//˭����˭�ͷţ���ֹ����ͷ�

void func(char *p)
{
    printf("%s\n",p);
//    free(p);
}

int main()
{
    char *p = (char*)malloc(100);
    strcpy(p,"abcdefg");
    func(p);
    free(p);
    p = NULL;

    return 0;
}
