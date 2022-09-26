// Tower of Hanoi problem using recursion. // initialy taking 3 disks

#include<iostream>
using namespace std;

void towerofHanoi(int n,char source,char helper,char dest) // recursive function
{
    if(n==1)
    {
        cout<<"Move from "<<source<<" to "<<dest<<endl;
        return;
    }
    towerofHanoi(n-1,source,dest,helper);
    cout<<"Move from "<<source<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,source,dest);
    return;
}

int main() // main function
{
    towerofHanoi(3,'A','B','C');
    return 0;
} 
