#include <stdio.h>

//�ַ����屻���ã��ع鱾��
//���µ�����ͨ��ת��ʵ���µĹ���
int main(int argc, char *argv[])
{

    printf("I like \"football\" \n");
    printf("I like 'football'   \n");
    printf("I \t like 'football'   \n");

    printf("I like \\football\\ \n");

//  printf("%d",10); //%10
    printf("%% %d", 10);

    //"�������һ��˫�����ַ�����������C������������������;
    //n�������һ���ַ��������أ�C������ʵ��һ�����еĹ��ܡ�

    printf("%d %d %d %d", '\n', '\t', '\b', '\r');

    printf("%% = %d %% = %d", '%', '%%');

    printf("\\= %d \\ = %d", '\\', '\\');

    printf("i like \xa fnumber restroom");
    return 0;
}
