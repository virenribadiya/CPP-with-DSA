// Program to convert hexadecimal to decimal
#include<iostream>
using namespace std;

int hexToDecimal(string n)
{
    int ans=0;
    int poweranswer=1;

    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans=ans+poweranswer*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans=ans+poweranswer*(n[i]-'A'+10);
        }
        poweranswer=poweranswer*16;
    }
    return ans;
}


int main()
{
    string n;
    cin>>n;

    cout<<hexToDecimal(n)<<endl;
    return 0;
}
