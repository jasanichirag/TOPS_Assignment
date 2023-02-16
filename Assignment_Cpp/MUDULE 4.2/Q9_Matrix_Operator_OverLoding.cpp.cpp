#include <iostream>
using namespace std;
class over
{
public:
    int array1[5];
    int answer[5];
    over()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "\tEnter Value : ";
            cin >> array1[i];
        }
    }
    over operator+(over obj)
    {
        for (int i = 0; i < 5; i++)
        {
            answer[i] = array1[i] + obj.array1[i];
            cout << answer[i]<<" ,";
        }
    }
};
int main()
{
    // Q10 ]-->  Write a Program of Two 1D Matrix Addition using Operator Overloading ;
    cout << "Enter First Matrix :-\n";
    over d1;
    cout << "\nEnter Second Matrix :-\n";
    over d2;
    cout << "Addition Of Two Matrix :- ";
    d1 + d2;
    // d1.+(d2);

    return 0;
}