#include <stdio.h>

//if else if        if if else
//��·ѡ�񣬶�·ѡ����Ƶ�����

//���a == b �Ļ���ӡ����a > b��ʱ���ӡ
//else �����ȸ������������δ��Ե�if�������
//{}
//����else��֧

//if else if û�������κεĲ�������
//����ѡ�����������һ����Ȼ��˳�����˵������������Ȼ˳�򣬽��������Ԥ��
//Ϊ�˱�֤����һʧ����õķ�������ÿһ·

int main()
{
    float score;
    scanf("%f", &score);
    if(score>=90)
    {
        printf("��ѧ��ѧϰ����\n");
    }
    else if(score >= 70)
        printf("��ѧ��ѧϰ�е�\n");
    else if(score >= 60)
        printf("��ѧ��ѧϰ����\n");
    else
        printf("��ѧ��ѧϰ��\n");
}

int main1()
{
    int a = 5; int b = 6;

    if(a != b)
        if(a>b)
            printf("a>b");
        else {
            printf("a<b");
        }
    else {
        printf("a==b");
    }

    return 0;
}
