// Introduction to two dimensional arrays.

#include<iostream>
 using namespace std;

 int main()
 {
    int n,m;
    cin>>n>>m;
    int a[n][m]; // declaration of 2D array
    // user input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j]; 
        }
    }

    cout<<"Matrix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 }
