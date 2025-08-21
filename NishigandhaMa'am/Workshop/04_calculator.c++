// Write a code in C++ to make basic calculator

#include <iostream>
using namespace std;

class calculator
{
public:
    float a, b;
    float sum();
    float sub();
    float multi();
    float div();
};

float calculator::sum()
{
    return a + b;
}

float calculator::sub()
{
    return a - b;
}

float calculator::multi()
{
    return a * b;
}

float calculator::div()
{
    return a / b;
}

int main()
{
    char op;

    calculator num;

    do
    {
        cout << "Select operation(+, -, *, /) or 'E' to exit: ";
        cin >> op;
        if ((op == 'e') || (op == 'E'))
        {
            cout << "Exiting program !!!";
            break;
        }
        cout << "Enter your first number: ";
        cin >> num.a;
        cout << "Enter your second number: ";
        cin >> num.b;
        switch (op)
        {
        case '+':
            cout << num.a << " + " << num.b << " = " << num.sum() << endl;
            break;
        case '-':
            cout << num.a << " - " << num.b << " = " << num.sub() << endl;
            break;
        case '*':
            cout << num.a << " * " << num.b << " = " << num.multi() << endl;
            break;
        case '/':
            cout << num.a << " / " << num.b << " = " << num.div() << endl;
            break;
        }
    } while ((op != 'e') && (op != 'E'));

    return 0;
}