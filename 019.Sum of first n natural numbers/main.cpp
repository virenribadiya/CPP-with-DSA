// Program to find sum of first n natural numbers.

// example - find sum of first 5 natural numbers.
// i.e - 1+2+3+4+5 = 15

#include<iostream>
using namespace std;

int sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;

}
