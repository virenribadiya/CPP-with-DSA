// program to move all the 'x' to the end of a string.

#include<iostream>
using namespace std;

string moveToEnd(string s) // reursive function
{
    if(s.length()==0)  // base case added
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
    string str;
    cin.getline(str);
    cin.ignore();
    cout<<moveToEnd(str)<<endl;
    //cout<<moveToEnd("xasddfxrfwgxxyx")<<endl;
    return 0;
}
