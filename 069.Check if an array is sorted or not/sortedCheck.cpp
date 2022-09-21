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
    int a[]={0,2,3,4,5};
    cout<<sorted(a,5)<<endl;
    return 0;
}
