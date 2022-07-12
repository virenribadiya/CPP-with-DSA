//program to know about data types in C++ and use of sizeof() function.

#include<iostream>
using namespace std;

int main(){

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
    #endif*/

    int i;
    cout<<"size of integer "<<sizeof(i)<<"\n";

    float f;
    cout<<"size of float "<<sizeof(f)<<endl;

    char c;
    cout<<"size of character "<<sizeof(c)<<endl;

    bool b;
    cout<<"size of boolean "<<sizeof(b)<<endl;

    short int si;
    cout<<"size of short int "<<sizeof(si)<<endl;

    long int li;
    cout<<"size of long int "<<sizeof(li)<<endl;

    return 0;  
}
