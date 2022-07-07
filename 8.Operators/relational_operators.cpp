//relational operators Defines a realtion bw 2 operands
// it returns bollean value - ==, !=, >, <, >=, <== 

// program to input a number n and tell whether it is equla to, less than or more than 10
#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    if (n>10)
    {
        cout<<"More than 10"<<endl;
    }
    else if(n<10)
    {
        cout<<"Less than 10"<<endl;
    }
    else
    {
        cout<<"equal 10"<<endl;
    }
    return 0;
}