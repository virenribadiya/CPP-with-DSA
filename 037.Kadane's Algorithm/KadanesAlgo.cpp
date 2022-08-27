// Kadane's Algorithm

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

    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++)
    {
        currentSum=a[i];
        maxSum=max(maxSum,currentSum);
        if(currentSum<0)
        {
            currentSum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}
