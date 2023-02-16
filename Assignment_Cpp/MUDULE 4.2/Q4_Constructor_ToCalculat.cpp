#include<iostream>
#include <iomanip>
using namespace std;
class calculat{
    public:
    calculat(float a,float b,char c){
    if (c=='+')
    {
        cout << "Addition = " << a + b;
    }else if (c=='-')
    {
        cout << "Subtraction = " << a - b;
    }else if (c=='*')
    {
        cout << "Multipliction = " << a * b;
    }else if (c=='/')
    {
        cout << "Divison = "<<fixed<<std::setprecision(2) << a / b;
    }    
    }
};
int main(){
    // Q4 ] -->  Write a program of Addition, Subtraction, Division, Multiplication using constructor. ;
    cout << "*Addition,Subtraction,Divison,Multiplication Using Function :\n\n";
    float a, b;
    char ch;
    cout << "\tEnter Number :";
    cin >> a;
    up:
    cout << "\tEnter : (+, -, *, /) : ";
    cin >> ch;
    if (ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
    cout << "\tEnter Number :";
    cin >> b;
    }else{
    cout << "Please Enter Valid Input !!\n";
    goto up;
    }
    // Make obj and calling cunstructor ;
    calculat s1(a, b, ch);

    return 0;
}