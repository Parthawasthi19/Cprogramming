#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    if ( a>b )
    {
        cout<<"this greatest number between the two is "<<a;
    }
    if ( b>a )
    {
        cout<<"this greatest number between the two is "<<b;
    }
    else
    {
        cout<<"both numbers are equal ";
    }
}