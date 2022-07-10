#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        int k=i;
        for(int j=k;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}