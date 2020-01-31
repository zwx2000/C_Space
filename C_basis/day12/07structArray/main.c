#include <stdio.h>

typedef struct _stu
{
    int num;
    char name[30];
    char sex;
    float score;
}Stu;

int main()
{
//    int arr[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    Stu s[4] = {{1001,"tangseng",'f',99},{1002,"wukong",'m',88},{1004},{}};

    for(int i=0; i<sizeof(s)/sizeof(*s);i++)
    {
        printf("num = %d\n",s[i].num);
        printf("name = %s\n",s[i].name);
        printf("sex = %c\n",s[i].sex);
        printf("score = %f\n",s[i].score);
    }
    return 0;
}
