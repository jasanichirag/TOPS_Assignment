#include<stdio.h>
int main(){
    // Q 4)--> to check if the given year is a leap year or not.;
    printf("check year is leap year or not \nenter year :");
    int year;
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("this year is leap year");
    }
    else
    {
        printf("this year is NOT leap year");
    }
    return 0;
}