#include <stdio.h>

int main2()
{
    int arr[10] = {1,1,2,2,3,3,4,5,6,0};
    int *p = arr;

    while(*p)
    {
        printf("%d\n",*p++);
    }
    return 0;
}

int main()
{
    char * pa[] = {"Google", "Oracle","Facebook","Apple","NZ",NULL};


    char* *p = pa;

//    for(int i=0; p[i]; i++)
//    {
//        printf("%s\n",*p);
//        p++;
//    }

    while(*p)
    {
        printf("%s\n",*p++);
    }
//    for(int i=0; i<sizeof(pa)/sizeof(*pa); i++)
//    {
//        printf("%s\n",pa[i]);
//    }

//    char **p = pa;

//    for(int i=0; i<sizeof(pa)/sizeof(*pa); i++)
//    {
//        printf("%p\n", p[i]);
//    }

    return 0;
}
