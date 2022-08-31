//  program to search a perticular element in a matrix having n rows and m columns. 

#include<iostream>
 using namespace std;

 int main()
 {
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) // user input
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

    int num;
    cin>>num;
    // logic.
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==num)
            {
                cout<<"Element found on following indices:"<<endl;
                cout<<i<<" "<<j<<endl;
                flag=1;
                break;
            }
        }
    }
  
    if(flag==0)
    {
        cout<<"element does not exist!!!"<<endl;
    }
    return 0;
 }
