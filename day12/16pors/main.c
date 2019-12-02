#include <stdio.h>

struct Staff
{
    char name[30];
    char job;
    union
    {
        int grade;
        char position[50];
    }gOrp;
};

int main()
{
    struct Staff s[2];

    for(int i=0; i<2; i++)
    {
        printf("name: ");
        scanf("%s",s[i].name);
        getchar();
        printf("job:");
        scanf("%c",&(s[i].job));
    }
    return 0;
}
