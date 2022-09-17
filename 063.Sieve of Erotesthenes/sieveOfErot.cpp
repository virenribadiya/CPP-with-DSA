#include<iostream>
using namespace std;

void sieve(int n)
{
    bool prime[100]={0}; // assuming all are peime.

    for(int i=2;i<n;i++)
    {
        if(prime[i]==0) // when i=4, all the multiple of 4 is already marked because they are also multiple of 2. 
        {
            for(int j=i*i;j<n;j=j+i)
            {
                prime[j]=1; //marking as non prime.
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }  
    }
    cout<<endl;
    return;
} 

int main()
{
    int n;
    cin>>n;
    
    sieve(n);
    
    return 0;
}
