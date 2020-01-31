#include <iostream>

using namespace std;

void InsertSort(int *a, int n);

int main()
{
    int x[] = {2,4,6,8,0,1,3,5,7,9};
    InsertSort(x,10);

    for(int i=0; i<10; i++)
    {
        cout<<x[i]<<endl;
    }
    return 0;
}

void InsertSort(int *a, int n)
{
    int in, out;
    //out = 0 这个人已经出去了
    for(out=1; out<n; out++)
    {
        int temp = a[out];
        in = out;
        while(in>0 && a[in-1]>=temp)
        {
            a[in] = a[in-1];
            in--;
        }
        a[in] = temp;
    }
}
