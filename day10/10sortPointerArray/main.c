#include <stdio.h>

int main()
{
    char* pArr[] = {"china","america","canada","japan"}; //×Ö·ûÖ¸ÕëÊý×é

    for(int i=0; i<4; i++)
    {
        printf("%p %s\n",pArr[i],pArr[i]);
    }

    char *pt;
    int n = sizeof(pArr)/sizeof(*pArr);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(pArr[i],pArr[j])>0)
            {
                pt = pArr[i];
                pArr[i] = pArr[j];
                pArr[j] = pt;
            }
        }
    }

    printf("++++++++++++++++++++++++++++++\n");
    for(int i=0; i<4; i++)
    {
        printf("%p  %s\n", pArr[i],pArr[i]);
    }

    return 0;
}
