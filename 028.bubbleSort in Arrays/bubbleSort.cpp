/* Bubble Sort */
/*
" Reapetedly swap two adjacent elements if they are
  in wrong order. "
*/

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

    for(int i=0;i<n-1;i++) // Logic for Bubble sort.
    {
        for(int j=0;j+1<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
