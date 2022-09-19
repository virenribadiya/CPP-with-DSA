#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1;
    int prevAns = factorial(n-1);
    return n*prevAns;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
