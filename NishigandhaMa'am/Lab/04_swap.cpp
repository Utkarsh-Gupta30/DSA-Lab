//WAP to interchange the value of two integers.

#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout<<"Enter two numbers: \n";
    cin>>a>>b;
    cout<<"Before swap: \n";
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swap: \n";
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}