#include<stdio.h>
int main(){

    // Q)3)--> find simple interest;
    //  formula==>Simple Interest= Principal * Interest Rate * Time/100;
    printf("find simple interest :-\n\nenter principal :");

    int P;
    scanf("%d", &P);
    printf("enter interest :");
    int I;
    scanf("%d", &I);
    printf("enter time :");
    int T;
    scanf("%d", &T);
    float si = (float)P * (float)I * (float)T / 100;
    printf("simple interest=%.3f", si);

    return 0;
}