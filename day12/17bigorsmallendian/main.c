#include <stdio.h>

union
{
    char ch;
    int i;
}un;

int main()
{
    un.i = 0x123445678;
    if(un.ch == 0x78)
        printf("С����");
    else {
        printf("�����");
    }
    return 0;
}
