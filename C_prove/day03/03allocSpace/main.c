#include <stdio.h>
#include <stdlib.h>

void *alloc2DSpace(int unitSize, int row, int line)
{
    void * p = malloc(unitSize*row*line);
    return p;
}

int main()
{
    int (*p)[5] = alloc2DSpace(sizeof (int),3,5);

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
            printf("%d\t",*(*(p+i)+j));//此处+i加的是一个数组的大小
        }
        putchar(10);
    }

    free(p);
    return 0;
}
