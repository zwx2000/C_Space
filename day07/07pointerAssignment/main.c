#include <stdio.h>

int main()
{
    int data = 0x12345678;

    char *pc = (char*)&data;
    printf("%x\n", *pc);
    return 0;
}
