#include<iostream>
using namespace std;

int facto(int num)
{
    if(num == 0 || num ==1)
    return num;

    else
    return num*facto(num-1);
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<num<<"! = "<<facto(num);
    return 0;
}