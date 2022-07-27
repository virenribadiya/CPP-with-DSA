// Linear Search - check the array elements one by one.

#include<iostream>
using namespace std;

int linearSearch(int array[],int n,int key)
{
    //Time complexity = O(n) // logic for search.
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;

    return 0;
}
