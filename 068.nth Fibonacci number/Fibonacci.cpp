// Explaination: Fib(position of number)
// Fib(n)=Fib(n-1)+Fib(n-2)
// Base Condition: Fib(0)=0,Fib(1)=1

#include<iostream>
using namespace std;

int Fibonacci(int n)
{
    if(n==0 || n==1)
        return n;
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n)<<endl;
    return 0;
}
