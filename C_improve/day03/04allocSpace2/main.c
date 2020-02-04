#include <stdio.h>

int **alloc2DSpace(int unitSize, int row, int line)
{
    //产生指针数组
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
            printf("%d\t",*(*(p+i)+j));//此处加i加的是一个指针的大小
        }
        putchar(10);
    }

    return 0;
}
