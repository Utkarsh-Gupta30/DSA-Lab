//WAP to take marks of five subject of a student to calculate his percentage and display it.

#include<iostream>
using namespace std;

int main()
{
    float s1, s2, s3, s4, s5,total, percentage;
    cout<<"Enter 5 subject marks: \n";
    cin>>s1>>s2>>s3>>s4>>s5;
    cout<<"Enter total marks of each subject: ";
    cin>>total;
    percentage = ((s1+s2+s3+s4+s5)/(5*total))*100;
    cout<<"Percentage: "<<percentage;
    return 0;
}