#include <stdio.h>
#include <string.h>

//���������ַ���
//�����ӵĴ�����Ҫ���㹻�Ŀռ�
//����char* ��Ϊ��ʵ����ʽ���
//���͵������ӡ�

char * myStract(char *dest, char *src)
{
    char * d = dest; //��¼�׵�ַ
    while(*dest) dest++;
    while(*dest++ = *src++);
    return d;       //�����׵�ַ
}

int main()
{
    char firstName[30] = "Jim";
    char lastName[30] = "Green";
    char middleName[30] = "---";


//    char *p, *q;
//    p = firstName; q = lastName;
//    while(*p) p++;

//****V1****
//    while(1)
//    {
//        *p = *q;
//        if(*p == '\0')
//            break;
//        p++;
//        q++;
//    }

//****V2****
//    while(1)
//    {
//        if((*p = *q) == '\0')
//            break;
//        p++;
//        q++;
//    }

//****V3****
//    while(*p = *q)
//    {
//        p++;
//        q++;
//    }

//****V4****
//    while(*p++ = *q++);

//    strcat(firstName,lastName);

    myStract(myStract(firstName,middleName),lastName);
    printf("%s\n", firstName);

    return 0;
}
