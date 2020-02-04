#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myCompare(const void * pa, const void * pb)
{
    if(strcmp(*(char**)pa,*(char**)pb) > 0)
        return 1;
    else
        return -1;
}

int main()
{
    char *pa[4] = {"China", "Apple", "Google", "Huawei"};

//    qsort(pa,4,4,);

    for(int i=0; i<4; i++)
    {
        printf("%s\n", pa[i]);
    }

    return 0;
}
