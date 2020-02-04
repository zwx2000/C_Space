#include <stdio.h>
#include "mystring.h"

int main()
{
    char name[1024] = "wangguilin";
    char name2[1024] = "wangguilin";

    if(myStrcmp(name,name2)!=0)
        printf("!=");
    else
        printf("==");

    return 0;
}

int main2()
{
    char buf[1024] = "i love ";
    char buf2[1024] = "c++";

    myStrcat(buf,buf2);

    printf("buf = %s\n",buf);
    return 0;
}

int main1()
{
    char * s = "Great Wall";
    int len = myStrlen(s);
    printf("len = %d\n",len);

    char buf[100];
    printf("buf = %s\n", myStrcpy(buf,s));

    char buf2[100];
    myStrcpy(buf2,myStrcpy(buf,s));
    printf("buf2 = %s\n", buf2);

    return 0;
}
