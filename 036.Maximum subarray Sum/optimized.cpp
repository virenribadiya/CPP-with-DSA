
// Time Complexity = 0(n^2)

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

    int sum,maxSum=INT_MIN;
    for(int i=0;i<n;i++) //starting point selection
    {
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            maxSum=max(sum,maxSum);
        }
        sum=0;
    }
    cout<<maxSum<<endl;
    return 0;
}
