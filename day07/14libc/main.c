#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//��ӡ10�����ظ��������
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
    srand(time(NULL));//�������������һ�����ӣ�randȥ������ȡ��
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
