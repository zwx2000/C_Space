#include <stdio.h>

//break���ܵ���ʹ�� switch break��

//ѭ����һ�� break ����ѭ�� breakͨ������if�ж�����֮��
//����բ

int main()
{
    int flood = 90;
    while(1)
    {
        printf("flood level : %d\n", flood);
        sleep(1);
        flood ++;
        if(flood>120)
            break;
    }
    printf("й��\n");
    return 0;
}
