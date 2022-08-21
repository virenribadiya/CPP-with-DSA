// Optimised approach due to constraints e.g time complexity = O(n)

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=2; // at initial stage longest subarray is first two elements and its length is 2.
    int curr=2;
    int pd=arr[1]-arr[0];
    int j=2; // we are starting to compare from index 2 because we have assume that first two index are our arithmetic sub array.

    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(curr,ans);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
