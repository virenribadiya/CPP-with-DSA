// Program to print Fibonacci Sequence.


#include<iostream>
using namespace std;

void fib(int num)
{
    int term1=0;
    int term2=1;
    for(int i=1;i<=num;i++) 
    {
        cout<<term1<<" ";
        int temp=term1+term2;
        term1=term2;
        term2=temp;
    }
}


int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}
