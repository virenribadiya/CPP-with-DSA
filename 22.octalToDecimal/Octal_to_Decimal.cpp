// Program to convert octal number to decimal number.

#include<iostream>
using namespace std;

int octalToDecimal(int n)
{
    int ans=0;
    int poweranswer=1;

    while(n>0) // conversion logic
    {
        int lastdigit=n%10;
        ans=ans+lastdigit*poweranswer;
        poweranswer=poweranswer*8;
        n=n/10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<octalToDecimal(n)<<endl;
    return 0;
}
