#include <stdio.h>

//if else if        if if else
//多路选择，多路选择的推导过程

//如果a == b 的话打印，或a > b的时候打印
//else 总是先跟其最近的尚且未配对的if进行配对
//{}
//增加else分支

//if else if 没有增加任何的补救条件
//这种选择往往会带来一种天然的顺序，如果说打破了这种自然顺序，结果就难以预料
//为了保证万无一失，最好的方法，把每一路

int main()
{
    float score;
    scanf("%f", &score);
    if(score>=90)
    {
        printf("该学生学习优秀\n");
    }
    else if(score >= 70)
        printf("该学生学习中等\n");
    else if(score >= 60)
        printf("该学生学习及格\n");
    else
        printf("该学生学习差\n");
}

int main1()
{
    int a = 5; int b = 6;

    if(a != b)
        if(a>b)
            printf("a>b");
        else {
            printf("a<b");
        }
    else {
        printf("a==b");
    }

    return 0;
}
