// time complexity = 0(n) 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c[n];
    cin>>c;
    int f=0,l=n-1;
    bool flag=true;
    while(f!=n)
    {
        if(c[f]==c[l])
        {
            f++;
            l--;
        }
        else
        {
            cout<<"not a palindrome!!"<<endl;
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Palindrome!!!"<<endl;
    }
    return 0;
}
