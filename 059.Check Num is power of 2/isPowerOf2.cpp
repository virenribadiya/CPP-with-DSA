// program to check number is perfect square or not?

#include<iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return n && !(n&(n-1)); 
}

int main()
{
    cout<<isPowerOf2(20)<<endl;
    return 0;
}
