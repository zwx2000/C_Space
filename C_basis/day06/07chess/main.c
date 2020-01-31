#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//天生棋局
int main()
{
    int chess[10][10] = {0};

    srand(time(NULL));

    int x,y;
    int count = 0;

//    while(1)
//    {
//        x = rand()%10;
//        y = rand()%10;
//        if(chess[x][y] != 1)
//        {
//            chess[x][y] = 1;
//            count++;
//            if(count == 10)
//                break;
//        }
//    }

    while(count<10)
    {
        x = rand()%10;
        y = rand()%10;
        if(chess[x][y] == 1)
            continue;
        chess[x][y] = 1;
        count++;
    }

    for(int i=0; i<10; i++)
    {
        for(int j =0; j<10; j++)
        {
            printf("%2d", chess[i][j]);

        }
        putchar(10);
    }

    int flagGoodChess = 0;
    count = 0;
    for(int i=0; i<10; i++) //横行扫描
    {
        count = 0;
        for(int j =0; j<10; j++)
        {
            if(chess[i][j] == 1)
            {
                count++;
                if(count == 3)
                {
                    flagGoodChess = 1;
                    break;
                }
            }
            else
                count = 0;
        }
        if(flagGoodChess == 1)
            break;

        count = 0;      //列扫描
        for(int j =0; j<10; j++)
        {
            if(chess[j][i] == 1)
            {
                count++;
                if(count == 3)
                {
                    flagGoodChess = 1;
                    break;
                }
            }
            else
                count = 0;
        }
        if(flagGoodChess == 1)
            break;
    }

    if(flagGoodChess == 1)
        printf("好棋\n");
    else
        printf("不好棋\n");

    return 0;
}
