#include<stdio.h>
int main(){

//Q2)--> WAP to swap two numbers without using third variable 
int a,b;
printf("enter 1st number A :");
scanf("%d",&a);
printf("enter 2nd value B :");
scanf("%d",&b);
//a=6 b=4
a = a + b;//6+4=10
b = a - b;//10-4=6
a = a - b;
printf("A= %d\n", a);
printf("B= %d\n", b);
return 0;
}