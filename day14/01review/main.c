#include <stdio.h>
#include <stdlib.h>

typedef struct _ContactsData
{
    char name[100];
    char mobileNum[12];
    char fixedNum[12];
    char companyName[30];
}ContactsData;

typedef struct _ContactsNode
{
    ContactsData data;
    struct _ContactsData *next;
}ContactsNode;

int main(int argc, char *argv[])
{
    ContactsNode * node = (ContactsNode *)malloc(sizeof(ContactsNode));
    if(NULL == node)
        exit(-1);

    strcpy(node->data.name,"zhansan");
    strcpy(node->next->mobileNum,"1709009909");
    strcpy(node->data.fixedNum,"13165451");
    strcpy(node->data.companyName,"Qier");

    printf("Name:%s\n", node->data.name);

    return 0;
}
