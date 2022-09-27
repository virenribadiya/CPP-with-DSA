// program to move all the 'x' to the end of a string.

#include<iostream>
using namespace std;

string moveToEnd(string s) // reursive function
{
    if(s.length()==0)
    {
        return "";
    }
    string ans = moveToEnd(s.substr(1));
    if(s[0]=='x')
    {
        return ans+s[0];
    }
    return s[0]+ans;
}

int main()
{
    cout<<moveToEnd("xasddfxrfwgxxyx")<<endl;
    return 0;
}
