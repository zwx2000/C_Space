#include <stdio.h>
#include <string.h>

char * foo(int n)
{
//    char arr[100];
    char * arr = (char*)malloc(n);
    return arr;
}

int getMem(char*p,int n)
{
    p=malloc(n);
    if(p==NULL)
        return -1;
    else
        return 0;
}

int main()
{
    char *p = foo(100);
    strcpy(p,"china");
    printf("%s\n",p);

    char *q;

    int ret;
    ret = getMem(q,100);

//    FILE*pf = fopen("aa.txt","w");
    return 0;
}
