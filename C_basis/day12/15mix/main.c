#include <stdio.h>
#include <string.h>

union mix
{
    char name[10];
    int age;
};

int main()
{
    union mix m;
    strcpy(m.name,"zhaowenxu");
    printf("%s\n",m.name);
    printf("%d\n",m.age);

    return 0;
}
