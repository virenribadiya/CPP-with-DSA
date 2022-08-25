#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            for(int k=start;k<=end;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
