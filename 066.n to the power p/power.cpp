// calculate n to the power p using recursion.

#include<iostream>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevPowerAns=power(n,p-1);
    return n*prevPowerAns;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    return 0;
}
