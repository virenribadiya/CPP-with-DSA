//Arithmetic operators - Binary and Unary
//Binary - +,-,*,/,% - need two operands
//unary - ++, -- --> postfix and prefix

#include<iostream>
using namespace std;
int main()
{
    // prob -1
    int i = 1;
      //1   //3
    i=i++ + ++i;
    cout<<i<<endl; 

    //prob -2
    i = 1;
    int j = 2;
    int k;
      //1 //2  //1    //2   //3  //4  //k=13
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;
    
    //prob -3
    i = 0;
        //0   //0   //1   //1   //i=0
    i = i++ - --i + ++i - i--;
    cout<<i<<endl;

    //prob -4
    i =1,j=2,k=3;
          //1    //2    //3  //m=-4
    int m = i-- - j-- - k--;
    cout<<i<<endl; //0
    cout<<j<<endl; //1
    cout<<k<<endl; //2
    cout<<m<<endl;

    //prob -5
    i=10,j=20,k;
     //10  //9    //19  //20  //9   //20  //10  //19
    k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<i<<endl; //10
    cout<<j<<endl; //20
    cout<<k<<endl; //-20
    return 0;
}