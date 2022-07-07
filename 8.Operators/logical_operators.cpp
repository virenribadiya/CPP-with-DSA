//logical operators - used to connect multiple conditions/expressions together or to reverse logical value
// &&, ||, !

//write a program to output whethr a number is devisible by both 2 and 3 or divisible by only one of them

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<"Divisible by both"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"only divisible by 2"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"only divisible by 3"<<endl;
    }
    else
    {
        cout<<"divisible by None"<<endl;
    }
    return 0;
}