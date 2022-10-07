
#include<iostream>
using namespace std;

void mergeSort(int arr[],int f,int l)
{
    if(f<l)
    {
        int mid = (f+l)/2;
        mergeSort(arr,f,mid);
        mergeSort(arr,mid+1,l);
        merge(arr,f,mid,l);
    }
}

int main()
{
    int a[5]={4,9,2,4,1};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergeSort(a,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
