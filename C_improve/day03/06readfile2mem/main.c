#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//按每一行打印到屏幕
//char buf[8][1024]

int main()
{
    FILE *pf = fopen("passwd","r+");
    if(pf==NULL)
        exit(-1);

    int lineCount = 0;

    char buf[1024];
    while(fgets(buf,1024,pf) != NULL)
    {
        lineCount ++;
    }
    rewind(pf);

    char **p = (char**)malloc(sizeof(char*)*(lineCount+1));
    memset(p,0,sizeof(char*)*(lineCount+1));

    int len;
    char **sp = p;
    while(fgets(buf,1024,pf) != NULL)
    {
        len = strlen(buf);
        *sp = (char*)malloc(len+1);
        strcpy(*p, buf);
        sp++;
    }
    *sp = NULL;

    fclose(pf);

    sp = p;
    while(*sp)
    {
        printf("%s",*sp++);
    }

    for(int i=0; i<lineCount; i++)
    {
        free(p[i]);
    }
    free(p);

    return 0;
}
