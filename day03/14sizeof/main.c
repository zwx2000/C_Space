#include <stdio.h>

//sizeof��һ���ؼ��� ���Ǻ���
//����>��ϵ>�߼� ���������� sizeofͬ��

int main()
{
    char ch;
    printf("sizeof(ch) = %d\n", sizeof(ch));
    printf("sizeof(char) = %d\n", sizeof(char));

    char a; int b; //b = sizeof a;

    printf("sizeof a+b = %d\n", sizeof(a+b));
    return 0;
}
