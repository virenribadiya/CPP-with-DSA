// Note: Here string is not a data type but it is a pre-defined class.
// Strings supports indexing starting with zero.
// .clear function is used to set the string to empty string.
// .compare(s2) function gives the positive value if a string is not equal to another string.
//   it gives zero if both the strings are equal. 
// .empty() --> it checks the string is empty or not. return one if empty and zero if not empty. 
// .erase(index from where we have to start deleting, how many index we have to delete)
// .find(substring that we have to find) -- gives the index where first element of substring is located.
// .insert(index at which we have to insert, string that we have to insert)
// .size() or .length() --> gives the length of the string
// .substr(index from where to start, after how many characters that we have to stop)
// stoi(numeric string) -- to convert numeric string to integer. // double value
// to_string(integer); -- to convert integr to string. 
// sort(s1.begin(),s1.end()) --> sort the string from a to z.

// this program contains all most of the useful functions of strings operations.
#include<iostream>
#include<algorithm> //sort()
#include<string>  // append() or s1 = s1+s2

using namespace std;

int main()
{
    /*Ways to declare strings.
    string str = "ApniKaksha";
    string str1(5,'n');
    */

    string str = "Hello World";
    getline(cin,str); // it is different from cin.getline function.
    cout<<str<<endl;

    string s1 = "fam";
    string s2 = "ily";
   
    // concatination
    s1 = s1+s2; // or s1.append(s2);
    cout<<s1<<endl;

    // indexing
    cout<<s1[1]<<endl;
    
    s1.clear();

    cout<<s1.compare(s2)<<endl; 

    cout<<s1.empty()<<endl;

    string s3 = "welcome";
    s3.erase(3,3);
    cout<<s3<<endl;

    cout<<s3.find("le")<<endl; 
    cout<<s3.length()<<endl;

    string s4 = "nincompoop";
    s4 = s4.substr(6,4);
    cout<<s4<<endl;

    string s5 = "112";
    stoi(s5);
    cout<<s5<<endl;

    int x=52;
    cout<<to_string(x)+"hiiii"<<endl;

    string s6="afhgkjebvbjgkjdngkjdjgkjaaafnerhg";
    sort(s6.begin(),s6.end());
    cout<<s6<<endl;


    return 0;
}
