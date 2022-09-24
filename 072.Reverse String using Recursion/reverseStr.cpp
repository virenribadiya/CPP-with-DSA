
#include<iostream>
using namespace std;

void reverseStr(string str)
{
    if(str.length()==0)
    {
        return;
    }
    string rest=str.substr(1);
    //cout<<"str="<<str<<endl;
    //cout<<"rest="<<rest<<endl;
    reverseStr(rest);
    cout<<str[0];
    return;
}

int main()
{
    reverseStr("Vinod");
    return 0;
}
