#include <stdio.h>

int main()
{
    int data = 0x12345678;
    printf("%p\n", &data);

    printf("%x\n", *(&data));

    printf("%d\n",*((int*)0x0000000061FE1C));
    return 0;
}
