#include <iostream>
using namespace std;
// Rectangle :Function Overloding :;
void Rectangle()
{
    float area, breadth;
    cout << "Without Parameter to calculate the area of rectangle :-\n\n";
    cout << "\tEnter Area    : ";
    cin >> area;
    cout << "\tEnter Breadth : ";
    cin >> breadth;
    cout << "Area Of Circle : " << area * breadth << endl;
    cout << "---------------------------------------\n";
}
void Rectangle(float a)
{
    float breadth;
    cout << "\tEnter Breadth : ";
    cin >> breadth;
    cout << "Area Of Circle : " << a * breadth << endl;
    cout << "---------------------------------------\n";
}
void Rectangle(float a, float b)
{
    cout << "Area Of Circle : " << a * b << endl;
    cout << "---------------------------------------\n";
}
// Triangle : Function Overloding ;
void triangle()
{
    cout << "Without Parameter to calculate the area of triangle :-\n\n";
    float area, breadth;
    cout << "\tEnter Area    : ";
    cin >> area;
    cout << "\tEnter Breadth : ";
    cin >> breadth;
    cout << "Area Of Triangle : " << (area * breadth) / 2 << endl;
    cout << "---------------------------------------\n";
}
void triangle(float a)
{
    float breadth;
    cout << "\tEnter Breadth : ";
    cin >> breadth;
    cout << "Area Of Triangle : " << (a * breadth) / 2 << endl;
    cout << "---------------------------------------\n";
}
void triangle(float a, float b)
{
    cout << "Area Of Triangle : " << (a * b) / 2 << endl;
    cout << "---------------------------------------\n";
}
// Circle :Function Overloding ;
void circle()
{
    cout << "Without Parameter to calculate the area of circle :-\n\n";
    float area, pi = 3.14;
    cout << "\tEnter Area : ";
    cin >> area;
    cout << "Area Of circle : " << pi * area * area << endl;
    cout << "---------------------------------------\n";
}
void circle(float a)
{
    float pi = 3.14;
    cout << "Area Of Circle : " << pi * a * a << endl;
    cout << "---------------------------------------\n";
}
void circle(float a, float p)
{
    cout << "Area Of cricle : " << p * a * a << endl;
    cout << "---------------------------------------\n";
}
int main()
{
    // Q12] --> Write a program to calculate the area of circle, rectangle and triangle using  Function Overloading  Rectangle : Area *breadth  Triangle : ½ *Area *breadth  Circle : Pi *Area *Area ;
    float pi = 3.14, area, breadth;
    // method of rectangle :
    Rectangle();
    cout << "With 1-Parameter to calculate the area of rectangle :-\n";
    cout << "\n\tEnter Area    : ";
    cin >> area;
    Rectangle(area);
    cout << "With 2-Parameter to calculate the area of rectangle :-\n\n";
    cout << "\tEnter Area     : ";
    cin >> area;
    cout << "\tEnter Breadth  : ";
    cin >> breadth;
    Rectangle(area, breadth);

    // method of triangle :
    triangle();
    cout << "With 1-Parameter to calculate the area of triangle :-\n";
    cout << "\n\tEnter Area    : ";
    cin >> area;
    triangle(area);
    cout << "With 2-Parameter to calculate the area of triangle :-\n\n";
    cout << "\tEnter Area     : ";
    cin >> area;
    cout << "\tEnter Breadth  : ";
    cin >> breadth;
    triangle(area, breadth);

    // Method Of circle :
    circle();
    cout << "With 1-Parameter to calculate the area of circle :-\n";
    cout << "\n\tEnter Area    : ";
    cin >> area;
    circle(area);
    cout << "With 2-Parameter to calculate the area of circle :-\n\n";
    cout << "\tEnter Area     : ";
    cin >> area;
    circle(area, pi);
    return 0;
}