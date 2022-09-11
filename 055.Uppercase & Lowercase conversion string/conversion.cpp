#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str = "gfkdrhskjbgkjbesjba";

    // lowercase to upercase logic
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<str<<endl;

    // uppercase to lowercase logic
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='z')
        {
            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
    return 0;
}