#include <stdio.h>

//点分十进制 192.168.1.1
//FILE* stdin/stdout

//更新数据表中，stu name列 id 1001 zhangsan
//update stu set name = "zhangsan" where id=1001
int main()
{
    int a = 10000;

//    FILE *pf = fopen("aa.txt","w");
//    printf("%d",a);
//    fprintf(pf,"%d",a);
//    fclose(pf);

//    char buf[1024];
//    sprintf(buf,"%d",a);
//    printf("%s\n",buf);

//    char ip[16];
//    int ip1,ip2,ip3,ip4;
//    scanf("%d%d%d%d",&ip1,&ip2,&ip3,&ip4);

//    sprintf(ip,"%d.%d.%d.%d",ip1,ip2,ip3,ip4);
//    printf("ip = %s\n", ip);

    char * sql = "update stu set name = \"zhangsan\" where id=1001";

    char name[] = "zhangsan";
    int id = 1002;
    char bufSql[1024];
    sprintf(bufSql,"update stu set name = \"%s\" where id = %d",name,id);

    printf("bufSql = %s\n", bufSql);

    return 0;
}
