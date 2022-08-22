#include<iostream>
#include<climits>
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

    const int size=1e6+2;
    int index[size];

    for(int i=0;i<size;i++)
    {
        index[i]=-1;
    }

    int minindex = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(index[a[i]]!=-1)
        {
            minindex=min(minindex,index[a[i]]);
        }
        else
        {
            index[a[i]]=i;
        }
    }

    if(minindex == INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<minindex;
    }

    return 0;
}