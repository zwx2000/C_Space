#include <stdio.h>
#include <string.h>

//���ַ�������
//�������ʱ��Ҫ����Ҫ�أ����������ͷ�Χ
//���ַ���ʱ��ֻ�贫p����arr ��Ϊ�ַ����Դ�������־

//��׼�ⲻ������ͼ��

int myStrlen(char * str)
{
    int len;
    for(len=0; *str++; len++);
    return len;
}

int main()
{
    char *p = "china";    //��ָ�븳����p
    char arr[] = "china"; //��ָ��ָ������ݸ�����arr

    char *q = p;
    int count = 0;
//    while(*q != '\0')
//    while(*q++)
//    {
//        count++;
//    }

    for(count=0; *q++; count++);
    printf("count = %d\n", count);

    int len = myStrlen(arr);
    printf("len = %d\n", len);

    return 0;
}
