#include <stdio.h>
#include <string.h>

void reverseStr(char *p, char * bufRev)
{
    if(*p)
    {
        reverseStr(p+1,bufRev);
        strncat(bufRev,p,1);
    }
}

int main()
{
    char buf[1024] = "china";

    char bufRev[1024];
    reverseStr(buf,bufRev);

    printf("%s\n", bufRev);

    return 0;
}

//char bufRev[1024];
//char *pb = bufRev;

//void reverseStr(char *p)
//{
//    if(*p)
//    {
//        reverseStr(p+1);
//        *pb++ = *p;
//    }
//}

//int main()
//{
//    char buf[1024] = "china";

//    reverseStr(buf);
//    *pb = '\0';
//    printf("%s\n",bufRev);
//    return 0;
//}
