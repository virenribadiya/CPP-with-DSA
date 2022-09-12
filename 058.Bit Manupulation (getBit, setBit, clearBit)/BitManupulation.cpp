// Program containg basic operations of bit manupulation.

#include<iostream>
using namespace std;

int getBit(int num, int pos)
{
    return (num & (1<<pos) != 0);
}

int setBit(int num, int pos)
{
    return (num | (1<<pos));
}

int clearBit(int num, int pos)
{
    return (num & (~(1<<pos)));
}

int updateBit(int num, int pos, int value)
{
    int clear=clearBit(num,pos);
    return (clear | (value<<pos));
}

int main()
{
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}
