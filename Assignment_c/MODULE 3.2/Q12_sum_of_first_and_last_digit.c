#include<stdio.h>
#include<string.h>
int main()
{

    // Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
    printf("*enter number and get first and last digit sum :\n");
    printf("ENTER NUMBER :");
    int num,a,sum;
    scanf("%d", &num);
    a = num % 10;
    while (num >= 9)
    {
     num%10;
     num = num / 10;
}
sum = a + num;
printf("FIRST AND LAST DIGIT SUM : %d", sum);

return 0;
}