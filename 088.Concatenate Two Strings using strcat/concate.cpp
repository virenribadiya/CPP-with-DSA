/*  C++ Program to Concatenate Two Strings using strcat  */
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char str[50],str1[50];

        cout<<"\nEnter First String :: ";
        gets(str);
        cout<<"\nEnter Second String :: ";
        gets(str1);

        strcat(str,str1); // inbuilt function having two arguments.

    cout<<"\nAfter Concatenating String is :: "<<str<<"\n";

    return 0;
}

