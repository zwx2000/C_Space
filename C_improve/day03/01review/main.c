#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int *p)
{
    *p = 400;
}

void func(char **p)
{
    *p = malloc(100);
}

int main()
{
    int a;
    foo(&a);
    printf("a = %d\n", a);

    int *q;
    func(&q);

    strcpy(q, "china");
    printf("%s\n",q);

    int arr[10];

    int *p = arr; // arr &arr[0] & int int *
    char *pa[] = {"a","b","c"};
    return 0;
}
