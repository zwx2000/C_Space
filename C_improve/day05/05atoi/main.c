#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1234;
    char buf[1024];

    itoa(a,buf,10);
    printf("buf = %s\n",buf);
    itoa(a,buf,16);
    printf("buf = %s\n",buf);
    itoa(a,buf,2);
    printf("buf = %s\n",buf);
}

int main1()
{
    char buf[1024] = "1234";

    int data = atoi(buf);
    printf("data = %d\n",data);
    return 0;
}
