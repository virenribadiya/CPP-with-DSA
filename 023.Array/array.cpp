// Array : group of values of same data type.


#include<iostream>
using namespace std;

int main()
{
    // values at the time of initialization.
    int array[4]={1,2,3,4};
    cout<<array[0]<<endl;

    // values from user.
    int n;
    cin>>n;
    int a[n];

    //taking input.
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //printing the array.
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}