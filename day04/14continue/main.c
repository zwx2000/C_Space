#include <stdio.h>

//ɸ��,��ǰ������ǰѭ��������һ��ѭ��
//while()
//{
//    if()
//    {
//        continue
//    }
//}

int main()
{
    for(int i=0; i<100; i++)
    {
        if(i%3 != 0)
            continue;

        printf("%d\n", i);
    }
    return 0;
}
