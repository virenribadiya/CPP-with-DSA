
#include<iostream>
using namespace std;

void subset(char a[],int n)
{
    for(int i=0;i<(1<<n);i++) //here 1<<n=8
    {
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j))!=0)
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
    return;
}

int main()
{
    char a[]={'a','b','c'};
    subset(a,3);
    return 0;
}
