#include <stdio.h>

//break switch for
//return

//goto ���ڴ�����������ѭ��Ч�ʸߡ�goto�Ƕ���ת��
//�����ڼ���ʽ������

int main()
{
Target:
    printf("00000000000\n");
    sleep(1);
    goto Target;
    return 0;
}

int main1()
{
    for(int i=0; i<1; ++i)
    {
        for(int j=0; j<1; j++)
        {
            for(int k=0; k<5; k++)
            {
                printf(" for(int k=0; k<5; k++)\n");
                if(k ==1)
                    return 0;
            }
            printf( "for(int j=0; j<1; j++)\n");
        }
        printf("for(int i=0; i<1; i++)\n");
    }
    return 0;
}
