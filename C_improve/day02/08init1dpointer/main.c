#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ͨ�����ָ�� �ı�һ��ָ���ָ������
//Ҳ�ж�һ��ָ��ĳ�ʼ������

enum
{
    Success,Failure,NameErr,SexErr,StrNumErr,ScoreErr
};

typedef struct _Stu
{
    char *name;
    char *sex;
    char *strNum;
    float *score;
}Stu;

//sqlite3 *db = NULL
//int rc = sqlite2_open("my.db",&db);

int stuInit(Stu **pp)
{
    *pp = malloc(sizeof(Stu));
    if(*pp == NULL)
        return Failure;

    (*pp)->name = malloc(100);
    if((*pp)->name == NULL)
        return NameErr;
    strcpy((*pp)->name,"tangseng");

    (*pp)->sex = malloc(1);
    if((*pp)->sex == NULL)
        return SexErr;
    *((*pp)->sex) = 'm';

    (*pp)->strNum = malloc(100);
    if((*pp)->strNum == NULL)
        return StrNumErr;
    strcpy((*pp)->strNum,"100001");

    (*pp)->score = malloc(4);
    if((*pp)->score == NULL)
        return ScoreErr;
    *((*pp)->score) = 100;

    return Success;
}

int main()
{
    Stu *ps = NULL;

    int ret = stuInit(&ps);
    if(ret == Success)
    {
        printf("��ʼ���ɹ�\n");
        printf("name  : %s\n",ps->name);
        printf("sex   : %c\n",*(ps->sex));
        printf("strNum: %s\n",ps->strNum);
        printf("score : %.2f\n",*(ps->score));
    }
    else
        printf("������:%d\n",ret);

    return 0;
}

//������ֵ�ʹ���������һ��
#if 0
int main()
{
    FILE *pf = fopen("aa.c","w");

    if(pf == NULL)
        printf("open error");

//    FILE *pf;

//    int ret = fopen(&pf,"aa.c","w");
//    if(ret == -1)
//        printf("open error");

    return 0;
}
#endif

#if 0
int alloc2dSpace(char* *p, int n)
{
    *p = malloc(n);
    if(*p!=NULL)
        return 0;
    else
        return -1;
}

int main()
{
    char *p = NULL;

    int ret = alloc2dSpace(&p,200);
    if(!ret)
    {
        strcpy(p,"china");
        printf("%s\n",p);
    }
}
#endif
