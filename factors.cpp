#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number";
    cin>>n;
    for ( i=1; i <=n; i++)
    {
        if (n%i == 0)
        {
            cout<<"Factor is"<<i<<endl;
        }
    }
    return 0;
}