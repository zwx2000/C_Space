#include <stdio.h>

//printf("--%d--\n", sizeof(""));

//������ַ�����һ������Խ�磬��ʱ�����飬�������ַ��������
//scanf�����ո��������
//gets �ո�Ҳ���Զ���
int main()
{
    char arr[10] = "china"; //data rodata
    //scanf("%s", arr);
    fgets(arr,10,stdin);
    printf("%s", arr);
}

int main1()
{
    char arr[100] = "china";

    printf("%s\n", arr);
    puts(arr);
    printf("==============");
    puts("");
    printf("==============");

    return 0;
}
