// Program to calculate factorial of a number.

#include<iostream>
using namespace std;

int fact(int num) 
{
    //logic
    int factorial=1;
    for(int i=2;i<=num;i++) 
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}
