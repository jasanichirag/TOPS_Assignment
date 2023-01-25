#include <stdio.h>
int main()
{
    // Q1]==>WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)

    int a, b;
    char ch;
    printf("enter 1st value :");
    scanf("%d", &a);

    printf("enter operation (+,-,/,*,%%) :");
    scanf("%c", &ch);
    scanf("%c", &ch);
    printf("enter 2nd value :");
    scanf("%d", &b);
    // float div = (float)a / (float)b;

    // output :
    switch (ch)
    {
    case '+':
        printf("addition = %d", a + b);
        break;
    case '-':
        printf("subtraction = %d", a - b);
        break;
    case '*':
        printf("multipal = %d", a * b);
        break;
    case '/':
    {
        float ans = (float)a / (float)b;
        printf("divisin = %.3f", ans);

        break;
    }
    case '%':
        printf("modulo = %d", a % b);
        break;

    default:
        printf("plase enter curect opration !!");
        break;
    }

    /*
    printf("output :\n \naddition = %d\n",a+b);
    printf("subtraction = %d\n",a-b);
    printf("nultiplication = %d\n",a*b);
    printf("division = %.3f\n",div);
    printf ("modulo = %d\n",a%b);
    */
    return 0;
}