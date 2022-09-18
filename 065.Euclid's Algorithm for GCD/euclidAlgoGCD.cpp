
// Euclid's Algorithm to find GCD.

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int rem;
    while((rem=a%b)!=0)
    {
        a=b;
        b=rem;
    }
    return b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
