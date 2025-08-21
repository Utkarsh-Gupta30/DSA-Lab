//WAP to find out addition of all the digits of four digit number.

#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout<<"Enter four digit number: ";
    cin>>num;
    for(int i=1; i<=4; i++)
    {
        sum += num%10;
        num = num/10;
    }
    cout<<"Sum of all digit: "<<sum;
    return 0;
}