#include <stdio.h>
#include <string.h>

typedef struct _stu
{
    char name[10];
    float score;
}Stu;

int myxx(const void *pa, const void *pb)
{
    if(strcmp(((Stu*)pa)->name,((Stu*)pb)->name) > 0)
        return 1;
    else
    {
        return ((Stu*)pb)->score - ((Stu*)pa)->score;
    }
}

int main()
{
    Stu stu[] = {{"aaa",23.5},
                 {"xxx",45.6},
                 {"bbb",89},
                 {"xxx",23.4},
                 {"yyy",100}
                };

    qsort(stu,sizeof(stu)/sizeof(*stu),sizeof(Stu),myxx);

    for(int i=0; i<5; i++)
    {
        printf("%s %f\n",stu[i].name, stu[i].score);
    }
    return 0;
}
