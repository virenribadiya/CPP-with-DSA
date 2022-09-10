// Program to swap two numbers by passing pointer to the function.

#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
    return;
}

int main()
{
    int a=10,b=20;
    int *aptr=&a,*bptr=&b; // storing address of a inside the pointer variables.

    swap(aptr,bptr); // function 
    cout<<a<<" "<<b<<endl;
    return 0;
}
