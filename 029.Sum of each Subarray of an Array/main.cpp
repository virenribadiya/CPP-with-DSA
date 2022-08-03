// Problem - sum of all subarrays of an array having n elements.

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

    int currentSum;

    for(int i=0;i<n;i++)
    {
        currentSum=0;
        for(int j=i;j<n;j++)
        {
            currentSum+=arr[j];
            cout<<currentSum<<" ";
        }
        cout<<endl;
    }






}



