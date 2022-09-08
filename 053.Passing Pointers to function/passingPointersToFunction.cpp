// Program to swap two numbers by passing pointer to the function.

#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10,b=20;
    int *aptr=&a,*bptr=&b; 

    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}
