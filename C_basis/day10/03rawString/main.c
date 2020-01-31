#include <stdio.h>
#include <string.h>

//求字符串长度
//传数组的时候，要传三要素，即数组名和范围
//传字符串时，只需传p或是arr 因为字符串自带结束标志

//标准库不作入参型检查

int myStrlen(char * str)
{
    int len;
    for(len=0; *str++; len++);
    return len;
}

int main()
{
    char *p = "china";    //将指针赋给了p
    char arr[] = "china"; //将指针指向的内容赋给了arr

    char *q = p;
    int count = 0;
//    while(*q != '\0')
//    while(*q++)
//    {
//        count++;
//    }

    for(count=0; *q++; count++);
    printf("count = %d\n", count);

    int len = myStrlen(arr);
    printf("len = %d\n", len);

    return 0;
}
