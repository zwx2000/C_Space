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
        printf("Ð¡¶ËÐò");
    else {
        printf("´ó¶ËÐò");
    }
    return 0;
}
