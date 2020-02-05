#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

enum Direction
{
    //WASD��ASCII��ֵ
    UP=119,DOWN=115,LEFT=97,RIGHT=100
};

void initDirection(enum Direction *dir)
{
    switch(rand()%4)
    {
        case 0:
            *dir = UP;
            break;
        case 1:
            *dir = DOWN;
            break;
        case 2:
            *dir = LEFT;
            break;
        case 3:
            *dir = RIGHT;
            break;
    }
}

enum FoodType
{
    LEVELLONE,LEVELTWO
};

typedef struct _pos
{
    int x_;
    int y_;
}Pos;

typedef struct _food
{
    Pos pos_;
    enum FoodType ft_;
}Food;

void initFood(Food *fd)
{
    fd->pos_.x_ = rand()%14+1; //1-14
    fd->pos_.y_ = rand()%14+1;
    fd->ft_ = LEVELLONE;
}

enum SnakeBodyType
{
    HEAD,BODY,TAIL
};

typedef struct _snake
{
    Pos pos_;
    enum SnakeBodyType sbt_;

    struct _snake *next;
}Snake;

void initSnake(Snake **head, Food *fd)
{
    (*head) = (Snake*)malloc(sizeof(Snake));
    do
    {
        //3-12�ռ�
        (*head)->pos_.x_ = rand()%10+3;
        (*head)->pos_.y_ = rand()%10+3;
        (*head)->sbt_ = HEAD;
    }while((*head)->pos_.x_ == fd->pos_.x_
           && (*head)->pos_.y_ == fd->pos_.y_);
    (*head)->next = NULL;
}

int isSnakePart(Snake *sh, int i, int j, enum SnakeBodyType *type)
{
    while(sh)
    {
        if(sh->pos_.x_==i && sh->pos_.y_==j)
        {
            *type = sh->sbt_;
            return 1;
        }
        sh = sh->next;
    }
    return 0;
}

int isMeetWall(Snake *sh)
{
    if(sh->pos_.x_==0 || sh->pos_.x_==15
            ||sh->pos_.y_==0 || sh->pos_.y_==15)
        return 1;
    else
        return 0;
}

int isBitSelf(Snake *sh)
{
    Pos pos = sh->pos_;
    sh = sh->next;
    while(sh)
    {
        if(sh->pos_.x_==pos.x_&&sh->pos_.y_==pos.y_)
            return 1;
        sh = sh->next;
    }
    return 0;
}

int isFood(Snake *sh, Food *fd)
{
    if(sh->pos_.x_==fd->pos_.x_&&
            sh->pos_.y_==fd->pos_.y_)
        return 1;
    else
        return 0;
}

int isFoodOnSnakeBody(Snake *sh,Food *fd)
{
    while(sh)
    {
        if(sh->pos_.x_==fd->pos_.x_&&sh->pos_.y_==fd->pos_.y_)
            return 1;
        sh = sh->next;
    }
    return 0;
}

void generateFood(Snake *sh,Food *fd)
{
    do
    {
        fd->pos_.x_ = rand()%14+1; //1-14
        fd->pos_.y_ = rand()%14+1;
        fd->ft_ = LEVELLONE;
    }while(isFoodOnSnakeBody(sh,fd));
}

void eatFood(Snake *sh,Food *fd)
{
    while(sh->next)
        sh = sh->next;

    Snake *node = (Snake*)malloc(sizeof(Snake));
    sh->next = node;
    node->next = NULL;

    if(sh->sbt_==HEAD)
    {
        node->sbt_ = TAIL;
    }
    else
    {
        sh->sbt_ = BODY;
        node->sbt_ = TAIL;
    }

    generateFood(sh,fd);
}

int snakeMove(Snake *sh, Food *fd, enum Direction *dir)
{
    Pos prePos = sh->pos_; //���ݵ�ǰ��λ��

    switch(*dir)
    {
        case UP:
            sh->pos_.x_--;
            break;
        case DOWN:
            sh->pos_.x_++;
            break;
        case LEFT:
            sh->pos_.y_--;
            break;
        case RIGHT:
            sh->pos_.y_++;
            break;
    }

    //ײǽ
    if(isMeetWall(sh))
        return -1;
    //�Ե��Լ�
    if(isBitSelf(sh))
        return -1;
    //�Ե�ʳ��
    if(isFood(sh,fd))
        eatFood(sh,fd);
    //�ƶ�

    Pos curPos;
    while(sh->next) //��֤������
    {
        curPos = sh->next->pos_;//�Ȱ���һ��λ�ñ�������
        sh->next->pos_ = prePos;//����һ���������qian'yiǰ��
        prePos = curPos;        //

        sh = sh->next;
    }
    return 0;
}

void getDirection(enum Direction * dir)
{
    enum Direction newDir;
    while(kbhit())//�����������
    {
        *dir = getch(); //�Ӽ��̻�ȡ����
        if(newDir==UP || newDir==DOWN ||newDir==LEFT ||newDir==RIGHT)
            *dir = newDir;
    }
}


void flushScreen(Snake *sh,Food *fd)
{
    enum SnakeBodyType type;
    for(int i=0; i<16; i++)
    {
        for(int j=0; j<16; j++)
        {
            if(i==0 || j==0 || i==15 || j==15)
                printf(" #");

            else if(isSnakePart(sh,i,j,&type))
            {
                switch(type)
                {
                    case HEAD:
                        printf(" @");
                        break;
                    case BODY:
                        printf(" *");
                        break;
                    case TAIL:
                        printf(" ^");
                        break;
                }
            }

            else if(fd->pos_.x_ == i && fd->pos_.y_ == j)
                printf(" &");
            else
                printf("  ");
        }
        putchar(10);
    }
}

void gameOver()
{
    printf("Game Over !\n");
}

void StartView()
{
    for(int i=0; i<16; i++)
    {
        for(int j=0; j<16; j++)
        {
            if(i==0 || j==0 || i==15 || j==15)
                printf(" #");
            else if(i==5&&j==5)
                printf("̰");
            else if(i==5&&j==7)
                printf("��");
            else if(i==5&&j==9)
                printf("��");
            else
                printf("  ");
        }
        putchar(10);
    }
    putchar(10);
    char choice;
    printf("If you want to play, please input y:");
    scanf("%c",&choice);
    if(choice == 'y')
        system("cls");
}

int main()
{
    srand(time(NULL));
    Food fd;
    initFood(&fd);

    Snake *snake;
    initSnake(&snake,&fd);

    enum Direction *dir;
    initDirection(&dir);

    StartView();

    while(1)
    {
        system("cls");  //����
        getDirection(&dir);                //�������Ļ�ȡ����    controller
        if(snakeMove(snake,&fd, &dir)==-1)
            break;                         //����������ڷ����仯 model
        flushScreen(snake,&fd);            //��������ı仯״̬   view
        usleep(1000*500); //����ʱ����
    }

    gameOver();
    return 0;
}
