#include <stdio.h>

//�������� �治���ڣ��±��Ƕ��٣�

//�۰���� Ҫ������������Ϊǰ��
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int findData = -1;
    int left = 0, right = 9, midIdx;
    int idx = -1;

    while(left <= right)
    {
        midIdx = (left+right)/2;
        if(findData == arr[midIdx])
        {
            idx = midIdx;
            break;
        }
        else if(findData > arr[midIdx])
            left = midIdx + 1;
        else
            right = midIdx - 1;
    }

    if(idx != -1)
        printf("idx = %d\n", midIdx);
    else
        printf("find none\n");

    return 0;
}


//���Բ��� ����һ��
int main1()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int findData = 5;
    int idx;
    for(int i=0; i<10; i++)
    {
        if(arr[i] == findData)
            idx = i;
    }
    if(idx == -1)
        printf("û���ҵ�\n");
    else {
        printf("idx = %d\n", idx);
    }
    return 0;
}
