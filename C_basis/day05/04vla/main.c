#include <stdio.h>

//��ν�ı䳤���飬�������п�ʼ����һ�θı��С�Ļ��ᣬ�����������ڼ䲻���Ըı��С
//��vla�����Գ�ʼ��

int main()
{
    int var;
    scanf("%d", &var);
    int arr[var]; //���ͳ������ʽ

    printf("sizeof(arr) = %d\n", sizeof(arr));
    var = 200;
    printf("sizeof(arr) = %d\n", sizeof(arr));

    return 0;
}
