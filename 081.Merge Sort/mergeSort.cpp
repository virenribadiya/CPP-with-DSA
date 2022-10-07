
#include<iostream>
using namespace std;

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
