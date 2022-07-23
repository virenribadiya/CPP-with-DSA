// Program to convert Binary number to decimal number.

#include<iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans=0;
    int poweranswer=1;
    while (n>0)
    {
       int lastdigit=n%10;
       ans=ans+(lastdigit*poweranswer);
       poweranswer=poweranswer*2;
       n=n/10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}
