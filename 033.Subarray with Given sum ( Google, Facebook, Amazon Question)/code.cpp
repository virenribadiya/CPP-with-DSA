// Time Complexity = 0(n)

#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int curr=0,st=0,en=-1,j=0;
    xyz:
        //cout<<"pass: "<<st<<endl;
        while(j<n && curr<=sum)
        {
            curr=curr+a[j];
            if(curr==sum)
            {
                en=j;
                cout<<"Starting index:"<<st<<endl<<"Ending index:"<<en<<endl;
                return 0;
            }
            j++;
        }

    //cout<<"current sum after pass-"<<st<<":"<<curr<<endl;
    if(curr!=sum && st<n)
    {
        st++;
        j=st;
        en=st;
        curr=0;
        goto xyz;
    }
    cout<<"-1";
    return 0;
}