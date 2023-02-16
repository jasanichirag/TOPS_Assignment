#include <iostream>
using namespace std;

class B{
        public:
            int F, S;
            B(){
            cout << "\nEnter Number Of A : ";
            cin >> F;
            cout << "Enter Number Of B : ";
            cin >> S;
            }
            friend void Swap_Without_Tvariable(B);
            friend void printB(B);
};
void printB(B b){
            cout << "Before Swap :-\n";
            cout<< "\tA = " << b.F;
            cout << "\n\tB = " << b.S;
}
void Swap_Without_Tvariable(B First){
        First.F = First.F + First.S;
        First.S = First.F - First.S;
        First.F = First.F - First.S;
        cout << "\nAfter swap ( Without Variable ) :- \n ";
        cout<<"\tA : " << First.F << endl;
        cout<< "\tB : " << First.S << endl;
}
int main()
{
    // Q12 ] -->  Write a program to swap the two numbers using friend function without using third variable ;
        cout << "*Swap Number :-\n ";
        B g;
        printB(g);
        Swap_Without_Tvariable(g);

        return 0;
}