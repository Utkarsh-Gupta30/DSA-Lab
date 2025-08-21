//WAP to calculate simple interest.

#include <iostream>
using namespace std;

int main()
{
    float p, r, t, si;
    cout << "Enter principle amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;
    si = (p * r * t) / 100;
    cout << "Simple Interest: " << si;
    return 0;
}