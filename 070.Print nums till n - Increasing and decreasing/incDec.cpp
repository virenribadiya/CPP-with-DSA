
#include<iostream>
using namespace std;

void inc(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    return;
}

void dec(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }    
    cout<<n<<endl;
    dec(n-1);
    return;
}

int main()
{
    int n;
    cin>>n;
    inc(n);
    dec(n);
    return 0;
}
