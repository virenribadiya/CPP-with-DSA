// Pointer Arithmetics --> ++,--,+,-
#include<iostream>
using namespace std;

int main()
{
    //int a=10;
    //int *aptr=&a;
    //cout<<aptr<<endl; //gives the address of a.
        // let aptr gives 2000.
    //aptr++;
    //cout<<aptr<<endl; // 2004 is printed.

    //at the time of array declaration, one variable is generated with name of array itself. it behaves like a poiner. it is a constant ponter. 
    // but pointer arithmetics is not applicable here?

    int ar[]={10,20,30};
    cout<<ar<<endl; //it gives the starting address of array.
    cout<<*ar<<endl; //10
    cout<<*ar<<endl; //11
    cout<<*(ar+1)<<endl; //20

    // printing the array with the pointer variable.
    int *ptr=ar;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    // printing the array by using the name of the array or we can say contant pointer.
    for(int i=0;i<3;i++)
    {
        cout<<*(ar+i)<<endl;
    }

    return 0;
}
