#include<iostream>
using namespace std;
template <typename t1>
class swape{
    public:
        t1 a, b,temp;
    swape(){
        cout << "\tEnter Number [A] : ";
        cin >> a;
        cout << "\tEnter Number [B] : ";
        cin >> b;
    }
    SwapNum(){
        cout << "BEFORE SWAP :-\n";
        cout << "\tA : " << a;
        cout << "\n\tB : " << b;
        temp = a;
        a = b;
        b = temp;
        cout << "\nAFTER SWAP :-\n";
        cout << "\tA : " << a;
        cout << "\n\tB : " << b;
    }

};
int main(){

    // Q1]-->  Write a program of to swap the two values using templates ;
    cout << "*Swap Two Value :- \n\n";
    swape<int> a;
    a.SwapNum();
    return 0;
}