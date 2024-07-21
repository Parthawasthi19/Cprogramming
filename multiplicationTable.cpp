#include<iostream>
using namespace std;
int main()
{
    int n,i,product;
    cout<<"Enter the number";
    cin>>n;
    for ( i = 1; i <=10; i++)
    {
        product = n * i ;
        cout<<n<<" * "<<i<<" = "<<product<<endl;
    }
    
}