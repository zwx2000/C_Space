#include <iostream>

using namespace std;

int BinarySearch(int *a, const int x, const int n);

int main()
{
    int x[] = {1,3,5,7,9,2,4,6,8,0};
    int res;
    int num;
    num = 7;

    res = BinarySearch(x,num,10);
    if(res<0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    return 0;
}

int BinarySearch(int *a, const int x, const int n)
{
    int low, high, mid;
    low=0, high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid] < x)
            low = mid+1;
        else if(a[mid] > x)
            high = mid-1;
    }
    return -1;
}
