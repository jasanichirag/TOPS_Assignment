#include <iostream>
using namespace std;
class Stduent
{
    int rollNo;
public:
    string name;
Stduent(){
    cout<<"\n\tEnter Stduent Name : ";
    getline(cin, name);
    getline(cin, name);
    cout << "\tEnter RollNumber   : ";
    cin >> rollNo;
    
}
void printStduent(){
    cout << "\n\tStduent Name     : " << name << endl;
    cout << "\tStduent Roll No. : " << rollNo << endl;
}
};
class test : public Stduent
{
    int Guj;
    int Eng;
public:
    int sum;
    test()
    {
    
    cout << "\tEnter Mark Of Guj. : ";
    cin >> Guj;
    cout << "\tEnter Mark of Eng. : ";
    cin >> Eng;
    sum = Guj + Eng;
    cout << "\n\t\t\t::\n";
  }
void printTest(){
    cout << "\tMark Of Gujarati : " << Guj << endl;
    cout << "\tMark Of English  : " << Eng << endl;
  }
};
class Result : public test
{
    int Total=sum;
    public:
   void printResult(){
        printStduent();
        printTest();
        cout << "\tTOTAL MARK OF \"" << name << "\" : "
             << Total<<endl;
        cout << "\n\t\t ::\n";
    }

};
int main()
{
    // Q8]--> Assume that the test results of a batch of students are stored in three different classes.Class Students are storing the roll number.Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in   the test.The class result can inherit the details of the marks obtained in the  test and roll number of students.(Multilevel Inheritance) ;
    cout << "*Multipale Stduent result :\n\n";
    int total;
    cout << "\tEnter Total Stduent : ";
    cin >> total;
    cout << "\n\n:::::::::::::  -:: INPUT INFORMATION ::- :::::::::::::\n";
    Result r[total];
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "\n:::::::::::::::::::  -:: RESULT ::- :::::::::::::::::::::\n\n";
    for (int i = 0; i < total; i++)
    {
    r[i].printResult();
    }
    cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
    return 0;
}
