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

    //max min logic.
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++)
    {
        /*Logic 1
        if(a[i]>maxNo)
        {
            maxNo=a[i];
        }
        if(a[i]<minNo)
        {
            minNo=a[i];
        }*/

        /*Logic 2*/
        maxNo=max(maxNo,a[i]);
        minNo=min(minNo,a[i]);
    }

    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
}