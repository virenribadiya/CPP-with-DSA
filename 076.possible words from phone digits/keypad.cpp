
// you have to press any two keys of an old keypad phone and what is the possible combinations of characters they have.
// write a c++ program for the same using recursion.

#include<iostream>
using namespace std;

string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0]; //2 ,3
    string code = keypadArr[ch-'0']; //"abc","def"
    string ros=s.substr(1); //3 , ""

    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans+code[i]);
    }
}

int main()
{
    keypad("23","");
    return 0;
}
