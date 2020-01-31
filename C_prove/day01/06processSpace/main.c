#include <stdio.h>

// ./a.out  aa      bb      cc      dd
// argv[0]  argv[1] argv[2] argv[3] argv[4]

int a;
int b=200;
char *p = "china";

int main(int argc, char * argv[], char*env[])
{
    while(*env)
    {
        printf("%s\n", *env++);
    }

    int gg = 20;
    int ggg[10] = {1,2,3,4,5,6,7,8,9,10};
    return 0;
}
