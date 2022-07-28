// program to find Prime numbers between two given numbers.

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++) //logic 
    {
        if(num%i==0) 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
