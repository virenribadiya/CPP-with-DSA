// Continue - Skip to the next iteration of the loop.
//Break - Terminate the loop.

#include<iostream>
using namespace std;
int main()
{
    int pocketMoney=3000;
    for(int i=1;i<=30;i++)
    {
        if(i%2==0)
        {
            continue;    
        }
        if(pocketMoney==0)
        {
            break;
        }
        cout<<"You can go outside today is Day-"<<i<<endl;
        pocketMoney = pocketMoney-300;
    }
    return 0;
}