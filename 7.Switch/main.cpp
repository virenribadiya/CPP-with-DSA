#include<iostream>
using namespace std;

int main()
{
    char button;
    cin>>button;

    switch(button)
    {
        case 'a':
            cout<<"Namste"<<endl;
            break;
        case 'b':
            cout<<"Hello"<<endl;
            break;
        case 'c':
            cout<<"Hii"<<endl;
            break;
        case 'd':
            cout<<"Kese He?"<<endl;
            break;
        case 'e':
            cout<<"Welcome"<<endl;
            break;
        default:
            cout<<"I am steal learninng"<<endl;
            break;
    }
    return 0;
}