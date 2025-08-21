#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter dividend and divisor: ";
    cin>>a>>b;
    try{
        if(b == 0) throw "Divisor should not be zero!";
        cout<<"Result: "<<a/b;
    }
    catch(const char* msg)
    {
        cout<<"Error: "<<msg;
    }
    return 0;
}