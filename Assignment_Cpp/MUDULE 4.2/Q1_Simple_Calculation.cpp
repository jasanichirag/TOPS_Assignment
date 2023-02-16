#include <iostream>
#include <iomanip>
using namespace std;
class calculation
{
public:
    void fun()
    {// input
        int a, b;
        cout << "*Simple Calculator :-\n\n";
        cout << "\tEnter number : ";
        cin >> a;
    up:
        char ch;
        cout << "\tEnter (+,-,*,/) : ";
        cin >> ch;
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            cout << "\tEnter number : ";
            cin >> b;
        }

        if (ch == '+')
        {
            cout << "Addition : " << a + b;
        }
        else if (ch == '-')
        {
            cout << "Subtraction : " << a - b;
        }
        else if (ch == '*')
        {
            cout << "Multiplication : " << a * b;
        }
        else if (ch == '/')
        {
            cout << "Divison : " << fixed << std::setprecision(2) << (float)a / (float)b;
        }
        else
        {
            cout << "Please enter valid input !!\n";
            goto up;
        }
    }
};
int main()
{

    // WAP to create simple calculator using class

    calculation s;
    s.fun();
    return 0;
}