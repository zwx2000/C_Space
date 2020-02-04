#include <stdio.h>
#include <string.h>

//C语言是如何处理常量字符串的

//"etewwqetdgdfshh"
//int t = 23;

//data ro const char *const

//等价

int main()
{
//    char bf1[10];
//    char bf2[10];

//    for(int i=0; i<10; i++)
//    {
//        bf1[i] = 'a';
//    }
//    strncpy(bf2,bf1,9);
//    bf2[9] = '\0';
//    printf("bf2 = %s\n",bf2);

    char *buf = "to be or not to be";
    char buf2[40];

//    strncpy(buf2,buf,sizeof(buf2)-1);
//    buf2[sizeof(buf2)-1] = '\0';
//    printf("buf2 = %s\n",buf2);

    strncpy(buf2,buf,5);
    buf2[5] = '\0';
    printf("buf2 = %s\n", buf2);

    return 0;
}

int main2()
{
    char buf[] = "china";

    printf("sizeof(buf) = %d\n", sizeof(buf));
    printf("buf = %p\n", buf);
    printf("buf+1 = %p\n", buf+1);
    printf("%s\n",buf);

    printf("sizeof(\"china\") = %d\n", sizeof("china"));
    printf("\"china\" = %p\n","china");
    printf("\"china\"+1 = %p\n","china"+1);
    printf("%s\n","china");

    return 0;
}

int main1()
{
    printf("%s %p %c %c \n","china","china",*"china","china"[2]);
    return 0;
}
