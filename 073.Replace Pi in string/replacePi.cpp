// Problem: replace pi with 3.14 using recursion.
// Input: pippppiiiipi
// Output Must be: 3.14ppp3.14iii3.14 

#include<iostream>
using namespace std;

void replacePi(string s) // recursive function
{
    if(s.length()==0) // base condition
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
    return;
}

int main()
{
    // user input
    string s;
    cin>>s;
    replacePi(s);
    //replacePi("pippppiiiipi");
    return 0;
}
