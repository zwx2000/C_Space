#include <stdio.h>
#include <string.h>

#if 0
ʲô�ǳ����ַ�����
"abcd"
C������δ������ַ���
C���Խ������ַ����洢��data rodata������Ϊһ��ָ��öε�ָ��
char *p = "abcd";

���ɸ���
char arr[] = "china";
sizeof(arr) sizeof("china") arr=1 "china"+1

�ַ����ŵ��ַ������еĵȼ۹�ϵ
sizeof(����Ĵ�С) >= sizeof(�ַ����Ĵ�С)
char arr[] = "china"; arr = "china";

�ַ����󳤣�ƴ�ӣ��������Ƚ� ��βμӿ���
ԭ��
�ÿ⺯��
           strlen sizeof()
"china"       5       6
p             5       4
arr           5       10

abcd0
efgh0

ƴ�ӡ����� ��ƴ��Դ�Ϳ���Դ��Ҫ���㹻�Ŀռ������Ԫ��

#endif

int main()
{
    strcmp();
}

int main3()
{
    char *c1 = "america"; char *c2 = "china";
    strcpy(c1,c2);//�������ɸ���

    char arr1[] = "china"; char arr2[] = "china";
    printf("%s\n",arr1);
    strcpy(arr1,arr2);//8������6��
    printf("%s\n", arr1);
}

int main2()
{
    char *p1 = "abcd"; char *p2 = "efgh";
    strcat(p1,p2);
    char arr1[] = "abcd"; char arr2[] = "efgh";
    strcat(arr1,arr2);
    return 0;
}

int main1()
{
    printf("%s\n", "china");
    char *p = "china";
    printf("%s\n", p);
    char arr[10] = "china";
    printf("%s\n",arr);
    return 0;

}
