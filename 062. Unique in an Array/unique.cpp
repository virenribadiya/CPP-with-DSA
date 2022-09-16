
#include<iostream>
using namespace std;

int unique(int a[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^a[i];
        cout<<xorsum<<endl;
    }
    return xorsum;
}

int main()
{
    int a[]={1,2,3,4,1,2,3};
    cout<<unique(a,7);
    return 0;
}
