#include <iostream>

using namespace std;

void BubbleSort(int list[], int n);

int main()
{
    int arr[10]={1,3,4,5,23,34,22,12,11,10};
    BubbleSort(arr,10);
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}

void BubbleSort(int list[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(list[i] > list[j]) {
                int tmp=list[i];
                list[i]=list[j];
                list[j] = tmp;
            }
        }
    }
}
