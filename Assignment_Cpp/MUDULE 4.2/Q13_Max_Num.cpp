#include<iostream>
using namespace std;
class B;
class A{
    public:
        int a;
        A(){
            cout << "\tEnter Number : ";
            cin >> a;
        }
        friend void max(A, B);
};
class B{
    public:
        int b;
        B(){
            cout << "\tEnter Number : ";
            cin >> b;
        }
        friend void max(A, B);
};
void max(A x,B y){
    if (x.a > y.b)
    {
        cout << "Max Number Of : " << x.a;
    }else{
        cout << "Max Number Of : " << y.b;
    }
    
}
int main(){
    // Q14] -->  Write a program to find the max number from given two numbers using friend function ;
    cout << "*find Max Number From Given Number : \n\n";
    A x;
    B y;
    max(x, y);

    return 0;
}