#include <stdio.h>

//Ѱ��ı�����,Ҫ�ı���Щ�������
//������Ϊ�ַ�������ַ������Ǿ�����ͬ������
//����Ϊ��Ҫ�ı��ַ��������ݣ�ͨ�����ַ��������ַ�������ȥ

//arr[6]��ջ�ϵĿռ� "china"��data һ�鳣������


int main()
{
    char arr[6] = "china"; //����֮�������ĳ�ֵȼ۹�ϵ

    printf("sizeof(arr)     = %d\tarr = %p\tarr+1 = %p\n", sizeof(arr), arr, arr+1);
    printf("sizeof(\"china\") = %d \"china\" = %p \"china\"+1 = %p\n", sizeof("china"), "china", "china"+1);

    printf("arr = %s\n", arr);
    printf("\"china\" = %s\n", "china");

}

//int main()
//{
//    char *p = "china";

////    printf("%c\n", p[2]);
////    p[2] = 'i';

//    return 0;
//}
