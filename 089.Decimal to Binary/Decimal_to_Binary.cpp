// program to convert decimal to binary
#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
    int ans=0;
    int poweranswer=1;

    while(poweranswer<=n)
    {
        poweranswer=poweranswer*2;
    }
    poweranswer=poweranswer/2;

    while(poweranswer>0)
    {
        // let n=12
        int lastdigit = n/poweranswer; // f=12/8= 1 , f=4/4=1, f=0/2=0, f=0/2=0  
        n = n-lastdigit*poweranswer; // n = 12 - 1*8=4 , n=4-1*4=0, n=0-0*2=0, n=0-0*1=0
        poweranswer=poweranswer/2; // p=8/2=4, p=4/2=2, p=2/2=1, p=1/2=0
        ans=ans*10+lastdigit; // a=0+1=1 , a=10+1=11, a=110+0=110, a=1100+0=1100
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<decimalToBinary(n)<<endl;
    return 0;
}
