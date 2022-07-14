// Function - Set of instructions to perform a perticular task.



/* Syntax of a function

returnType functionName(parameter1,parameter2,...)
{
    //Body
}

-Points:    
1. only names of variable are passed and not their types while calling a function.
2. We pass the values, not variables themselves. Local variables are created in functions which are destroyed on returning from them.

*/

#include<iostream>
using namespace std;

int add(int num1,int num2)
{
    int sum= num1+num2;
    return sum;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}
