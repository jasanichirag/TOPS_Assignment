#include <iostream>
using namespace std;
     void Add()
     {
          int a, b;
          cout << "\tEnter Number : ";
          cin >> a;
          cout << "\tEnter Number : ";
          cin >> b;
          cout << "\nAddition : " << a + b;
     }
     void Add(int a, int b)
     {
          cout << "Addition : " << a + b;
     }
     void Sub()
     {
          int a, b;
          cout << "\tEnter Number : ";
          cin >> a;
          cout << "\tEnter Number : ";
          cin >> b;
          cout << "\nSubtraction : " << a - b;
     }
     void Sub(int a, int b)
     {
          cout << "Subtraction : " << a - b;
     }
     void Multi()
     {
          int a, b;
          cout << "\tEnter Number : ";
          cin >> a;
          cout << "\tEnter Number : ";
          cin >> b;
          cout << "\nMultipliction : " << a * b;
     }
     void Multi(int a, int b)
     {
          cout << "Multipliction : " << a * b;
     }
     void Div()
     {
          float a, b;
          cout << "\tEnter Number : ";
          cin >> a;
          cout << "\tEnter Number : ";
          cin >> b;
          cout << "\nDivison : " << a / b;
     }
     void Div(int a, int b)
     {
          cout << "Divison : " << (float)a / (float)b;
     }

int main()
{
     // Q8] --> Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading : ;
     cout << "*Mathematic operation Function Overloding :\n";
top:
     cout << "===========================================\n";
     cout << "Without Parameters For PRESS [1] : \n";
     cout << "With Paramaters For PRESS [2] : \n";
     char ch;
     cout << "\tEnter Number :";
     cin >> ch;
     if (ch == '1')
     {
     up:
          cout << "Without Parameters ::- \n";
          cout << "\n\tEnter Function (+, -, *, / ) : ";
          char ch1;
          cin >> ch1;
          if (ch1 == '+')
          {
            Add();
          }
          else if (ch1 == '-')
          {
            Sub();
          }
          else if (ch1 == '*')
          {
               Multi();
          }
          else if (ch1 == '/')
          {
               Div();
          }
          else
          {
               cout << "Please Enter Valid Number !!\n";
               goto up;
          }
     }
     else if (ch == '2')
     {
          cout << "\nWith Paramaters ::- \n";
          int a, b;
          cout << "\n\tEnter First Number :";
          cin >> a;
     up2:
          cout << "\tEnter Function (+, -, *, / ) : ";
          char ch1;
          cin >> ch1;
          if (ch1 == '+' || ch1 == '-' || ch1 == '*' || ch1 == '/')
          {
               cout << "\tEnter Second Number : ";
               cin >> b;
          }
          else
          {
               cout << "Enter Valid Input !!\n";
               goto up2;
          }
          if (ch1 == '+')
          {
               Add(a, b);
          }
          else if (ch1 == '-')
          {
               Sub(a, b);
          }
          else if (ch1 == '*')
          {
               Multi(a, b);
          }
          else if (ch1 == '/')
          {
               Div(a, b);
          }
     }
     else
     {
          cout << "Enter Valid Input !!\n";
          goto top;
     }

     return 0;
}