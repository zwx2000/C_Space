#include <stdio.h>

int main()
{
    char *cArr[] = {"abc","abc","abc"};
    printf("sizeof(cArr) = %d\n",sizeof(cArr));

    for(int i=0; i<sizeof(cArr)/sizeof(*cArr); i++)
    {

    }
    return 0;
}
