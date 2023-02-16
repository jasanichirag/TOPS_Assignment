#include <iostream>
using namespace std;
class concat
{

public:
    string fname, lname;
    concat()
    {
        cout << "\n\tEnter First Name : ";
        cin >> fname;
        cout << "\tEnter Last Name : ";
        cin >> lname;
    }
    concat operator+(concat obj)
    {
        cout << "\tconcat Two String :- " << fname << " " << lname << endl;
        cout << "\tconcat Two String :- " << obj.fname << " " << obj.lname << endl;
    }
};
int main()
{

    // Q11] --> Write a program to concatenate the two strings using Operator Overloading ;
    cout << "*Two String Concatenate :-\n";
    concat a, b;
    cout << "\nConcatenation Tow String :-\n\n";
    a + b;
    return 0;
}