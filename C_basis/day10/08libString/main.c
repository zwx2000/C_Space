#include <stdio.h>

//1,��һ�๦�ܺ���д��һ��xxx.c����
//2,��xxx.c�����еĺ�������д��xxx.h��ȥ
//3,��xxx.h�м���,����ͷ�ļ��ظ����������
//4,��xxx.h ������xxx.c��ȥ �԰��� ��ʵ�ֵ��á���
//5,��main������ ����xxx.h ˭��˭����

//ע�� 1.ʵ�� 2.���� 3.��һ���ɿ⣬libmystr.so �������ṩmystring.h�Ϳ�����
//libc.so  stdio.h  string.h  stdlib.h time.h

int main()
{
    char *s1 = "abc"; char *s2 = "abc";
    int ret = myStcmp(s1,s2);

    if(ret == 0)
        printf("==");
    return 0;
}
