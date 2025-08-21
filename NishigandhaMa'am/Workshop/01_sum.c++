// Write C++ program to add two number using class

#include<iostream>
using namespace std;

class add
{
    int a, b;
    public:
    void sum()
    {
        cout<<"Enter any two number: \n";
        cin>>a>>b;
        cout<<a<<" + "<<b<<" = "<<a+b;
    }
};
int main()
{
    add a;
    a.sum();
    return 0;
}