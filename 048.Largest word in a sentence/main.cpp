#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char c[n+1];
    cin.getline(c,n+1);
    //cout<<c<<endl;
    int i=0;
    int curr=0,maxLength=0;
    int st=0;
    //cout<<c[i];
    while(c[i]!='\0')
    {
        if(c[i]!=' ')
        {
            curr++;
            maxLength=max(maxLength,curr);
        }
        else
        {    
            curr=0;
            st=i+1;
        }
        i++;
    }
    cout<<maxLength<<endl;
    while(c[st]!='\0')
    {
        cout<<c[st];
        st++;
    }
    cout<<endl;
    return 0;
}
