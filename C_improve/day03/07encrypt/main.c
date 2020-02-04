#include <stdio.h>
#include <string.h>

/*
    4->4
    hello_everyone

    hell
    o_ev
    eryo
    ne

    hoene_reley*lvo*0

    hoen
    e_re
    ley*
    lvo*0

    hello_everyone**0

    hello_everyone

    6->3
    hello_
    everyo
    ne****0

*/

//Êý×éÖ¸Õë

char * encode(char *buf, int line)
{
    int bufLen = strlen(buf);
    int newBufLen = bufLen;
    if(bufLen%line)
        newBufLen = bufLen + line - (bufLen%line);
    char * newBuf = (char*)malloc(newBufLen+1);
    strcpy(newBuf,buf);
    for(int i=bufLen; i<newBufLen; i++)
    {
        newBuf[i] = '*';
    }
    newBuf[newBufLen] = '\0';

    char *sec = (char*)malloc(newBufLen+1);

    char *subSec = sec;

    char (*rp)[line] = newBuf;

    for(int i=0; i<line; i++)
    {
        for(int j=0; j<newBufLen/line; j++)
        {
            *subSec++ = rp[j][i];
        }
    }

    free(newBuf);
    return sec;
}

char * decode(char *sec, int line)
{
    int len = strlen(sec);
    char * buf = (char*)malloc(len+1);
    char * subBuf = buf;
    char (*rp)[line] = sec;

    for(int i=0; i<line; i++)
    {
        for(int j=0; j<len/line; j++)
        {
            *subBuf++ = rp[j][i];
        }
    }
    while(*(--subBuf)=='*');
    *(++subBuf) = '\0';

    return buf;
}

int main()
{
    char * buf  = "hello_everyone";

    char *sec   = encode(buf,6);
    printf("sec   = %s\n", sec);
    char *ensec = decode(sec,3);
    printf("ensec = %s\n", ensec);

    free(sec);
    free(ensec);
    return 0;
}
