#include<iostream>
using namespace std;
inline int multipliction(int a,int b){
    return a * b;
}
inline int cubic(int a){
    return a * a * a;
}
int main(){
    // Q3] --> Write a program to find the multiplication values and the cubic values using   inline function :

    int a, b, c;
    cout << "Multipliction Of Given Number : \n\n";
    cout << "\tEnter Number : ";
    cin >> a;
    cout << "\tEnter number : ";
    cin >> b;
    cout << "multipliction = " << multipliction(a, b)<<endl<<endl;
    cout << "Cubics Of Given Number :\n";
    cout << "\n\tEnter Number : ";
    cin >> c;
    cout << "Cubics (" << c << ") = " << cubic(c);

    return 0;
}