// Program to check if an array is sorted or not (Using Recursion)

#include<iostream>
using namespace std;

bool sorted(int a[], int n)
{
    if(n==1)
        return true;
    return(a[0]<a[1] && sorted(a+1,n-1));
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sorted(a,n)<<endl;
    //int a[]={0,2,3,4,5};
    //cout<<sorted(a,5)<<endl;
    return 0;
}
