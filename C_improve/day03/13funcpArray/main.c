#include <stdio.h>

// char * pa[10]

void func0(int i)
{
    printf("your enter %d so fun%d is called\n",i,i);
}

void func1(int i)
{
    printf("your enter %d so fun%d is called\n",i,i);

}

void func2(int i)
{
    printf("your enter %d so fun%d is called\n",i,i);

}

void func3(int i)
{
    printf("your enter %d so fun%d is called\n",i,i);

}

int main()
{
    void (*fpa[4])(int i) = {func0, func1,func2,func3};

    while(1)
    {
        int choice;
        printf("pls intput number between 0 and 3:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
                fpa[choice](choice);
                break;
            case 1:
                fpa[choice](choice);
                break;
            case 2:
                fpa[choice](choice);
                break;
            case 3:
                fpa[choice](choice);
                break;
            default:
                return ;
        }
    }

    return 0;
}
