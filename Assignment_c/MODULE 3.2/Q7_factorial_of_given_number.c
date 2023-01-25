#include<stdio.h>
int main(){

    // Q6)-->  WAP to print factorial of given number ;
    int n,fectorial=1;
    printf("enter number and find factorial :\nenter number :");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        fectorial *= i;
    }
    printf("factorial is = %d", fectorial);

    return 0;
}