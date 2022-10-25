// Program to find EVEN or ODD without using Modulus (%) Operator in C++

#include<iostream>
using namespace std;

int main() 
{
	int n; 
	
	cout<<"Enter Number: ";
	cin>>n;

	while(n>1) // checking num greater than 1 
	{
		n = n-2; // if yes then decrease n by 2
	}

	if(n==0)
		cout<<"Even Number"<<endl;
	else
		cout<<"Odd Number"<<endl;

	return 0;
}
