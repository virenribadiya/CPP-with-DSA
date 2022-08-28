#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[],int n)
{
    int maxSum=INT_MIN;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        curr+=a[i];
        if(curr<0)
        {
            curr=0;
        }
        maxSum=max(maxSum,curr);
    }
    return maxSum;
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

    int nonWrapSum=kadane(a,n);
    int wrapSum;
    int totalSum;
    for(int i=0;i<n;i++)
    {
        totalSum+=a[i];
        a[i]=-a[i];
    }

    wrapSum=totalSum+kadane(a,n);

    cout<<max(wrapSum,nonWrapSum)<<endl;
    return 0;
}

