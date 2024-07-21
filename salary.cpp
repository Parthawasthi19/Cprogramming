#include<iostream>
using namespace std;

int main()
{
    float basic;
    float percentallowance;
    float percentdeduction;
    float netsalary;
    cout<<"Enter your Basic salary "<<endl;
    cin>>basic;
    cout<<"Enter your percentage of allowances "<<endl;
    cin>>percentallowance;
    cout<<"Enter your percentage of deductions "<<endl;
    cin>>percentdeduction;
    netsalary = basic + (basic*percentallowance/100) - (basic*percentdeduction/100) ;
    cout<<"Your Net salary is "<<netsalary<<endl;
    return 0;
}
