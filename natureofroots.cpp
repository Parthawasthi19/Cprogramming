#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout<<"Enter the value of a,b and c in the quadratic equation ax^2 + bx + c to find its roots";
    cin>>a>>b>>c;
    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a) ;
    r1 = (-b - sqrt(b*b - 4*a*c))/(2*a) ;
    d= b*b - 4*a*c;
    if ( d == 0 ) 
    {
        cout<<"The roots of the eqaution "<<r1<<" and "<<r2<<"are real and equal"<<endl ;
    }
    else if ( d > 0 ) 
    {
        cout<<"The roots of the eqaution "<<r1<<" and "<<r2<<"are real and unequal"<<endl ;
    }
    else
    {
        cout<<"The roots of the eqaution "<<r1<<" and "<<r2<<"are imaginary"<<endl ;
    }
    return 0;
}