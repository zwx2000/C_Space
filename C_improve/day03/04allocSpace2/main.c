#include <stdio.h>

int **alloc2DSpace(int unitSize, int row, int line)
{
    //����ָ������
    int **p = malloc(sizeof(int*)*row);
    for(int i=0; i<row; i++)
    {
        p[i] = malloc(unitSize*line);
    }
    return p;
}

int main()
{
    // 3 5 int

    int **p = alloc2DSpace(sizeof(int),3,5);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            p[i][j] = i+j;
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d\t",*(*(p+i)+j));//�˴���i�ӵ���һ��ָ��Ĵ�С
        }
        putchar(10);
    }

    return 0;
}
