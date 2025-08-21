// Write a C++ program to calculate area and perimeter of rectangle

#include<iostream>
using namespace std;

class rectangle
{
    float lenght, breadth;
    public:
    void get()
    {
        cout<<"Enter lenght of rectangle: ";
        cin>>lenght;
        cout<<"Enter breadth of rectangle: ";
        cin>>breadth;
    }
    void area()
    {
        cout<<"Area of rectangle: "<<lenght*breadth<<endl;
    }
    void perimeter()
    {
        cout<<"Perimeter of rectangle: "<<2*(lenght+breadth)<<endl;
    }
};

int main()
{
    rectangle r;
    r.get();
    r.area();
    r.perimeter();
    return 0;
}