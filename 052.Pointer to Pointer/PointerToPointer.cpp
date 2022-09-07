#include<iostream>
using namespace std;

int main()
{
    //let the address of a is 2000.
    //let the address of p is 4000.
    int a=10;
    int *aptr=&a;
    cout<<aptr<<endl;
    int **q=&aptr;
    cout<<*q<<endl;//2000 -- address of a.
    cout<<**q<<endl;//4000 -- address of p.
    return 0;
}
