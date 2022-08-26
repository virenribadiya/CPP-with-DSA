// Find the sum of a subarray which is maximum of all the sums subarrays.
// Time Complexity = 0(n^3)

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
    int sum=0;
    for(int i=0;i<n;i++)// to select starting point
    {
        for(int j=0;j<n;j++) // to select ending point
        {
            for(int k=i;k<=j;k++) // to find sum of an subarray.
            {
               sum+=a[k]; 
            }
            maxSum=max(maxSum,sum);
            sum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}


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
    int sum=0;
    for(int i=0;i<n;i++)// to select starting point
    {
        for(int j=0;j<n;j++) // to select ending point
        {
            for(int k=i;k<=j;k++) // to find sum of an subarray.
            {
               sum+=a[k]; 
            }
            maxSum=max(maxSum,sum);
            sum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}
