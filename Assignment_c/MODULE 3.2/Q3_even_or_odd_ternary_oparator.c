#include<stdio.h>
int main(){

//Q3)--> WAP to find number is even or odd using ternary operator :
printf("check number is odd or even:-->\n");
int x;
//input :
printf("enter number :");
scanf("%d",&x);


// ternary oparator :
(x%2==0)?printf("this number is even"):printf("this number is odd");

    return 0;
}