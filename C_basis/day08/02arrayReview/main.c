#include <stdio.h>

//һά���������Ը���һ��ָ��
//������������������⣬��ָ����Խ��������ָ���������⣬������ȴδ��

//�߱���ͬ��ַ��ָ�롣
int main()
{
    int arr[3][4];

#if 0
    arr     arr+1      arr+2
    arr[0]  arr[0]+1   arr[0]+2

    *arr    *arr+1     *arr+2
    &arr[0] &arr[0]+1  &arr[0]+2
#endif

}

int main1()
{
    int arr[10];
    printf("%d  %d\n", arr[0], *(arr+0));

    //    arr == &arr[0]  int*
    //    int *pa = &arr[0];
    int *pa = arr;
    //������ҪΨһ�ı�ʶ���顣�Ƕ��������룬ָ�볣��

    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
