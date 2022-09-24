// program to print reverse of a string using recursion. 

#include<iostream>
using namespace std;

void reverseStr(string str)
{
    if(str.length()==0) // checking string length.
    {
        return;
    }
    string rest=str.substr(1); // forming substring.
    //cout<<"str="<<str<<endl;
    //cout<<"rest="<<rest<<endl;
    reverseStr(rest);
    cout<<str[0];
    return;
}

int main()
{
    reverseStr("Vinod"); // calling recursive function.
    return 0;
}
