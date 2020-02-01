#include <stdio.h>
#include <stdlib.h>
//** 一维数组

int alloc2DSpace(int ***p, int unitSize, int row, int line)
{
    *p = (int**)malloc(sizeof(int)*row);

    if(*p!=NULL)
    {
        for(int i=0; i<row; i++)
        {
            (*p)[i] = malloc(unitSize*line);
        }
        return 0;
    }
    else
        return -1;
}

void free2DSpace(int **p, int row)
{
    for(int i=0; i<row; i++)
    {
        free(p[i]);
    }
    free(p);
}

int main()
{
    int **p;//全都是放int*的一维数组

    int ret = alloc2DSpace(&p, sizeof(int), 3, 5);

    if(!ret)
    {
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
    }

    free2DSpace(p,3);

    return 0;
}
