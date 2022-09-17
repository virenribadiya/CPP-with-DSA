
// Program to find total numbers from to 1 to n that are divisible by a OR b.
// ex: find total numbers from 1 to 40 that are divisible by 5 OR 7.

#include<iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1=n/a; // total numbers that are divisible by a.
    int c2=n/b; // total numbers that are divisible by b.
    int c3=n/(a*b); // total numbers that are divisible by a and b both.

    return c1+c2-c3; // inclusion - exclusion principle.
}

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b)<<endl;

    return 0;
}
