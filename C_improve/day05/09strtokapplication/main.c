#include <stdio.h>
#include <string.h>

int main()
{
    char buf[] = "sys:x:3:3:Ownerofsystemfiles:/usr/sys:";

    char *p;
    p = strtok(buf,":");
    while(p)
    {
        printf("%s\n",p);
        p = strtok(NULL,":");
    }
    return 0;
}
