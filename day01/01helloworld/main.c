#include <stdio.h> //C���������еĺ�����Ҫ����������ʹ��

int main() //main��ں���
{
    printf("Hello World!\n"); //error warning
    return 0;
}

//IDE һ��������һ������й���
//��Դ�ļ�����ִ���ļ���������ʲô��
//linux   --- main.c   a.out
//windows --- main.c   xxx.exe

//gcc -E main.c -o main.i Ԥ����
//gcc -S main.i -o main.s ����
//gcc -c main.s -o main.o ���
//gcc main.o    -o hello  ����
