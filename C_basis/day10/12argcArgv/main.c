#include <stdio.h>

//���������̣�ͨ�������У����ݸ����̵Ĳ�����������main�Ĳ���
//arg argument ���� c count  argc ��������
//argv arg ָ������ v vector ָ������

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
