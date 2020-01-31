#include <stdio.h>

int main(int argc, char *argv[],char**env[])
{
    for(int i=0; i<argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    while(*argv)
    {
        printf("%s\n",*argv++);
    }

    while(*env)
    {
        printf("%s",*env++);
    }

    return 0;
}
