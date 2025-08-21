#include<iostream>
using namespace std;

int main()
{
    int num = 22;
    switch(num%2)
    {
        case 0: cout<<"It is even number.";
        break;
        default: cout<<"It is odd number.";
        
    }
    return 0;
}