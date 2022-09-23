
#include<iostream>
using namespace std;

int foccur(int a[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return foccur(a,n,i+1,key);
}


int main()
{
    int a[]={1,2,3,4,5,2,3};
    cout<<foccur(a,7,0,2)<<endl;
    //cout<<loccur(a,6,2)<<endl;
    return 0;
}
