#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout<<"Enter the value of a,b and c in the quadratic equation ax^2 + bx + c to find its roots";
    cin>>a>>b>>c;
    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a) ;
    r1 = (-b - sqrt(b*b - 4*a*c))/(2*a) ;
    cout<<"The roots of the equation are "<<r1<<" And "<<r2 ;
    return 0;
}