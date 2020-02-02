#include "mysort.h"

void selectSort(int *p, int n, int(*pf)(int a, int b))
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n ;j++)
        {
            if (pf(p[i],p[j])) //p[i]>p[j] 1  0
            {
                p[i] = p[i]^p[j];
                p[j] = p[i]^p[j];
                p[i] = p[i]^p[j];
            }
        }
    }
}
