#include <stdio.h>

//printf("--%d--\n", sizeof(""));

//输入的字符串，一般数组越界，此时的数组，仅仅是字符数组而已
//scanf遇到空格结束输入
//gets 空格也可以读入
int main()
{
    char arr[10] = "china"; //data rodata
    //scanf("%s", arr);
    fgets(arr,10,stdin);
    printf("%s", arr);
}

int main1()
{
    char arr[100] = "china";

    printf("%s\n", arr);
    puts(arr);
    printf("==============");
    puts("");
    printf("==============");

    return 0;
}
