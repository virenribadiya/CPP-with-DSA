//program to check armstrong number.

// An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. 
// For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(originaln==sum)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}
