#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pa = (char*)malloc(10);
    pa = realloc(pa,20);
    strcpy(pa,"1234567890abcdef");

    free(pa);
    return 0;
}
