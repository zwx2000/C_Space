#include <stdio.h>
#include <string.h>

//strlen strcat strcpy strcmp

//strcpy �����������򣬱������㹻�Ŀռ�����
//�ȿ��������жϣ��ټӼ�

char * myStrcpy(char *dest, char *src)
{
    char *d = dest;
    while(*dest++ = *src++);
    return d;
}

int main()
{
    char name[200] = {0};
    char *pName = "china";
    char name2[200];
    myStrcpy(name,myStrcpy(name2, pName));
    printf("name2 = %s\n",name2);
    printf("name  = %s\n",name);

    return 0;
}
