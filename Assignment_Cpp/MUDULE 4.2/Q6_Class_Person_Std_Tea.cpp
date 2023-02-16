#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    personin(){
        cout<<"\nEnter Person Name : ";
        getline(cin,name);
        getline(cin,name);
        cout << "Enter Person Age : ";
        cin >> age;
    }
    void printP(){
        cout << "Stduent Name : " << name << endl;
        cout << "Stduent Age : " << age << endl;
    }
};
class Stduent: public person{
    float pr;
    int Id;
    int total=0,mark;

public:
    Stduent (){
        personin();
        cout << "Stduent Id : ";
        cin >> Id;
        cout << "\nEnter 5 SUBJECT Mark Into 100* : \n";
       for (int i = 1; i <= 5; i++)
       {
           cout << "Enter Mark ["<<i<<"] : ";
           cin >> mark;
           total += mark;
       }
       pr = (float)total / 500 * 100;
    }
    void printS(){
       printP();
       cout << "Stduent Id : " << Id << endl;
       cout << "Stduent Total : " << total << endl;
       cout << "Stduent Pr : " << pr << endl;
    }
};
class teacher:public person{
    string Tname;
    int salary;
public:
    teacher()
    {
       cout << "Enter Teacher Name : ";
       getline(cin,Tname);
       getline(cin,Tname);
       cout << "Enter Teacher Salary :";
       cin >> salary;
    }
    void printT(){
       cout << "Teacher Name : " << Tname << endl;
       cout << "Teacher Salary : " << salary << endl;
    }
};
int main (){
    // Create a class person having members name and age. Derive a class student having member percentage.Derive another class teacher having member salary.Write necessary member function to initialize,  read and write data.Write also Main function(Multiple Inheritance);
    cout << "*read And Write Data :\n\n";
    int n;
    cout << "\tEnter Total person : ";
    cin >> n;
    Stduent s[n];
    teacher t[n];
    cout << "::::::::::::::  -:: RESULT ::-  ::::::::::::::\n\n";
    // print data:
    for (int i = 0; i < n; i++)
    {
       s[i].printS();
       t[i].printT();
       cout << "\n..................................\n\n";
    }
    
     
     return 0;
}