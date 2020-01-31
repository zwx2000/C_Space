#include <stdio.h>

typedef struct _candidate
{
    char name[30];
    int voteCount;
}Candidate;

void disCandidateRes(Candidate* c,int n,int count)
{
    for(int i=0; i<n; i++)
    {
        printf("Name:%10s VoteCount: %2d\n",c[i].name,c[i].voteCount);
    }
    printf("��Ȩ������:%d\n",count);

    int idx = 0;
    for(int i=0; i<n; i++)
    {
        if(c[i].voteCount > c[idx].voteCount)
            idx = i;
    }
    printf("��ϲ%s����˱���ѡ��\n",c[idx].name);
}

int main()
{
    Candidate can[3] =
    {
        {"zhangsan",0},
        {"lisi",0},
        {"wangwu",0}
    };

    char buf[1024];
    //10���� Ͷ10��Ʊ
    int count=0;
    for(int i=0; i<10; i++)
    {
        printf("pls input your like:");
        scanf("%s",buf);
        int flag=1;
        for(int i=0; i<3; i++)
        {
            if(!strcmp(buf,can[i].name))
            {
                can[i].voteCount++;
                flag = 0;
            }
        }
        if(flag!=0)
        {
            count++;
        }
    }

    disCandidateRes(can,3,10);

    return 0;
}
