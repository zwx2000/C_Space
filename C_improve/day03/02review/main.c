#include <stdio.h>

int main()
{
    char * str = "china";

    while(*str)
    {
        printf("%c\n", *str);

        int arr[10] = {1,2,3,4,5,6,7,8,9,0};
        int *p = arr;
        while(*p)
        {
            printf("%d\n", p++);
        }

        char * pArray[] = {"china", "amreica","Google",NULL};
        char **pa = pArray;
        while(*pa)
        {
            printf("%p\n",*pa++);
        }
    }
    return 0;
}
