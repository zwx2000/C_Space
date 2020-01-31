#include <stdio.h>
#include <stdlib.h>

//vla

int main()
{
    int *pa;

    printf("start len:");
    int len;
    scanf("%d", &len);
    pa = (int*)malloc(len*sizeof(int));

    int oldlen = len;

    for(int i=0; i<len; i++)
    {
        pa[i] = 100+i;
        printf("%d\n", pa[i]);
    }

    printf("new larger len:");
    scanf("%d",&len);
    pa = (int*)realloc(pa,len*sizeof(int));

    for(int i=0; i<len; i++)
    {
        if(i>=oldlen)
            pa[i] = 200+i;
        printf("%d\n",pa[i]);
    }
    return 0;
}
