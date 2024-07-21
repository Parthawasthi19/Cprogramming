#include<iostream>
using namespace std;
int main ()
{
    int n, sum ;
    cout<<"Enter the number till which you need the sum of all the natural numbers ";
    cin>>n;
    sum = (n*(n+1))/2;
    cout<<"The sum of all the nautral numbers till you requested is "<<sum;
    return 0;
}