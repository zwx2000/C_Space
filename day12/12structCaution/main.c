#include <stdio.h>

//typedef struct _stu
//{
//    char name[30];
//    int score;
//}Stu;

//����ռ��ʱ�����֮��

typedef struct _stu
{
    char *name;
    int score;
}Stu;

int main()
{
    Stu s;
//    strcpy(s.name,"jim");
//    s.name = "jim";
    s.name = (char*)malloc(100);
    strcpy(s.name,"jimGreen");
    s.score = 200;
    printf("name = %s score = %d\n",s.name,s.score);
    return 0;
}
