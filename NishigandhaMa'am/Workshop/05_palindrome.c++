// Write a C++ program to identify palindrome number.

#include<iostream>
using namespace std;

class palindrome
{
    public:
    int num;
    void identify();
};

void palindrome::identify()
{
    int temp = num;
    int rev_num=0;
    while(num != 0)
    {
        rev_num = rev_num * 10 + (num % 10);

        num = num/10;
    }
    
    if(temp == rev_num)
    {
        cout<<temp<<" is palindrome.";
    }
    else
    {
        cout<<temp<<" is not palindrome.";
    }
}

int main()
{
    palindrome p;
    cout<<"Enter a number: ";
    cin>>p.num;
    p.identify();
    return 0;
}