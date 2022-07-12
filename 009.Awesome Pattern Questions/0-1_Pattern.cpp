// Program to print following pattern.

// 1 
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int value=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<value<<" ";
            if(value==1)
            {
                value=0;
            }
            else
            {
                value=1;
            }
        }
        cout<<endl;
    }
}
