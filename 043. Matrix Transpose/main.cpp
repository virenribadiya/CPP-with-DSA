// program to find transpose of a matrix.

#include<iostream>
using namespace std;

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // printing initial logic.
    cout<<"Matrix is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }

    for(int i=0;i<3;i++) // swaping logic.
    {
        for(int j=i;j<3;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    cout<<"transpose is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }
    return 0;
}