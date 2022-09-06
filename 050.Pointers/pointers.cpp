// Pointers are variables that stores the address of the other variables.

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *aptr=&a; // that means int *aptr; aptr=&a;
    // we are using above format to reduce the lenght of code.
    cout<<aptr<<endl; // gives the address of a.
    cout<<*aptr<<endl; // gives the value of a.
    return 0;
}

