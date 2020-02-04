#include <stdio.h>

typedef struct _stuff
{
    char name[10];
    int score;
}Stuff;

typedef union _un
{
    char name[8];
    int score;
}Un;

int main1()
{
    /*char p[8];*/
    void *p = malloc(8);

    char *cp = (char*)p;
    for(int i=0; i<8; i++)
        cp[i] = 'a'+i;

    for(int i=0; i<8; i++)
        printf("cp[%d] = %c\n", i, cp[i]);

    short *sp = (short*)p;
    for(int i=0; i<4; i++)
        sp[i] = 100+i;

    for(int i=0; i<4; i++)
        printf("sp[%d] = %c\n", i, sp[i]);

    double *dp = (double*)p;
    *dp = 1.23456;
    printf("*dp=%f\n", *dp);

    char *csp = (char*)p;
    strcpy(csp,"china");

    Stuff * stp = (Stuff *)p;
    strcpy(stp->name,"aa");
    stp->score = 200;
    printf("name = %s score = %d\n",stp->name, stp->score);

    Un *pu = (Un*)p;
    strcpy(pu->name,"aa");
    printf("name = %s\n",stp->name);
    pu->score = 200;
    printf("score = %d\n",stp->score);
}

int main()
{
    signed char ch1 = 0xff;
    printf("%d\n", ch1);

    unsigned char ch2 = 0xff;
    printf("%d\n", ch2);
    return 0;
}
