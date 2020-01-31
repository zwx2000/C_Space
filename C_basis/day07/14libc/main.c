#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//打印10个不重复的随机数
int main()
{
    srand(time(NULL));

//    for(int i=0; i<10; i++)
//        printf("%d\n", rand()%100);
    int randArr[10];

    int count = 0;
    while(1)
    {
        int num = rand()%10;
        randArr[count++] = num;

        for(int i=0; i<count-1; i++)
        {
           if(randArr[count-1] == randArr[i])
           {
               count--;
               break;
           }
        }
        if(count==10)
            break;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d  ", randArr[i]);
    }

}

int main2()
{
    unsigned int seconds = time(NULL);
    printf("%u\n", seconds);
    return 0;
}


int main1()
{
    srand(time(NULL));//给随机数发生器一个种子，rand去发生器取数
    int randNum = rand();
    printf("%d\n", randNum);
    randNum = rand();
    printf("%d\n", randNum);
    randNum = rand();
    printf("%d\n", randNum);
    randNum = rand();
    printf("%d\n", randNum);
    randNum = rand();
    printf("%d\n", randNum);
    return 0;
}
