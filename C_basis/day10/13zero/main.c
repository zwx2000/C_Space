#include <stdio.h>

#if 0
int 0
float 0.0
* NULL ��ʶδ��ʼ����ָ�룬�����ڴ�����ַ
char  '\0'  ���ڱ�ʶ�ַ��������ı�־

char '0'
��0��  '0'+'\0'

#endif

int main()
{
    printf("int %d\n",0);
    printf("float %d\n",0.0);

    printf("'0' = %d %c\n",'0','0');

    printf("NULL = %p  NULL = %d\n", NULL, NULL);

    printf("\\0=%d  \\0=%c",'\0','\0');

    return 0;
}
