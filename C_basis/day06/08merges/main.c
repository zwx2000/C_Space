#include <stdio.h>

#define M 5
#define N 3
//有序数组归并
//归并排序
int main()
{
    int A[M] = {11,13,15,37,39};
    int B[N] = {22,24,26};

    int C[M+N];

    int i = 0, j = 0, k = 0;
    while(i<M && j<N)
    {
        if(A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while(i<5)
        C[k++] = A[i++];

    while(j<3)
        C[k++] = B[j++];

    for(int i=0; i<M+N; i++)
    {
        printf("%d\n", C[i]);
    }

    return 0;
}
