#include <stdio.h>
#include <string.h>
struct employee
{
    int empno;
    char empName[30];
    char add[50];
    int age;
};
int main()
{
    // Q9 ]   Write a program of structure employee that provides the followinginformation - print and display empno, empname, address and age
    printf("*employee information :\n");

    struct employee s;
    printf("ENTER EMPLOYEE NO : ");
    scanf("%d", &s.empno);
    printf("ENTER EMPLOYEE NAME :");
    gets(s.empName);
    gets(s.empName);
    printf("ENTER ADDRESS : ");
    gets(s.add);
    printf("ENTER EMPLOYEE AGE :");
    scanf("%d", &s.age);
    printf("\n\nemployee no      : %d\n", s.empno);
    printf("employee name    : %s\n", s.empName);
    printf("employee address : %s\n", s.add);
    printf("employee age     : %d\n", s.age);

    return 0;
}