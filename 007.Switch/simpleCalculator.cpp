// program to make a simple calculator.

#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    char op;
    cout<<"Enter an operator:";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    
    case '-':
        cout<<a-b<<endl;
        break;
    
    case '*':
        cout<<a*b<<endl;
        break;
    
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"please enter valid operator";
        break;
    }
    return 0;
}
