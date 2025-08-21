// Write a C++ program to find wheather the given number is even or odd

#include<iostream>
using namespace std;

class number
{
    int a;
    public:
    void identify()
    {
        cout<<"Enter a number: ";
        cin>>a;
        if(a%2 == 0)
        {
            cout<<"It is even number.";
        }
        else
        {
            cout<<"It is odd number.";
        }
    }
};

int main()
{
    number n;
    n.identify();
    return 0;
}