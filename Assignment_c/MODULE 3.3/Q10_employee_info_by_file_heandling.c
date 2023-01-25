#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[20];
    char add[50];
    int age;

};

int main()
{

    //  Q10]  Write a program of structure for five employee that provides the following  information - print and display empno, empname, address and age :
    printf("* five employee information :\n");
    FILE *myPointer;
    int n;
    printf("ENTER TOTAL EMPLOYEE : ");
    scanf("%d", &n);
    struct emp s[n];
    myPointer = fopen("employee_data.txt", "w");
    fprintf(myPointer, "\t\t\t\t::  EMPLOYEE TABLE  ::\n\t\t\t\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter employee id      : ");
        scanf("%d", &s[i].id);
        printf("enter employee name    : ");
        gets(s[i].name);
        gets(s[i].name);
        printf("enter employee address : ");
        gets(s[i].add);
        printf("enter employee age     : ");
        scanf("%d", &s[i].age);
        printf("\n");
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for (int i = 0; i < n; i++)
    {
        fprintf(myPointer,"employee id      : %d\n", s[i].id);
        fprintf(myPointer,"employee name    : %s\n", s[i].name);
        fprintf(myPointer,"employee address : %s\n", s[i].add);
        fprintf(myPointer,"employee age     : %d\n", s[i].age);
        fprintf(myPointer,"\n");
    }

    fclose(myPointer);

    return 0;
}