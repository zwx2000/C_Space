#include <stdio.h>

//8
// top == 0 �������ⵯ���ѵ�ջ��
// top == 8 ��������ѹ���ѵ�ջ��

//topʼ��ָ��һ���������λ��
//push���� 1��д������ 2��top++ 3��������������ǰ����ջ����
//pop������1��top--    2���������� 3��������������ǰ����ջ�ǿ�

typedef struct _Stack
{
    int mem[1024];
    int top;
}Stack;

int isFull(Stack *ps)
{
    return ps->top == 1024;
}

int isEmpty(Stack *ps)
{
    return ps->top == 0;
}

void push(Stack *ps,char ch)
{
    ps->mem[ps->top++] = ch;
}

char pop(Stack *ps)
{
    return ps->mem[--(ps->top)];
}

int main()
{
    Stack s = {{0},0};

    for(char ch='a'; ch<='z';ch++)
    {
        if(!isFull(&s))
            push(&s,ch);
    }

    while(!isEmpty(&s))
    {
        putchar(pop(&s));
        puts("");
    }
    return 0;
}
