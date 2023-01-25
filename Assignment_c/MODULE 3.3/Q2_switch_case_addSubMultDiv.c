#include <stdio.h>
int main()
{

    // Q2 WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

    printf("\n*Addition, Subtraction, Multiplication and Division using Switch case:");
    int num1, num2;
    char fun;
    printf("\nENTER FIRST VALUE : ");
    scanf("%d", &num1);
    printf("ENTER SECOND VALUE : ");
    scanf("%d", &num2);
    up:
    printf("ENTER FUNCTION(+,-,*,/) : ");
    scanf("%c", &fun);
    scanf("%c", &fun);
    
    switch (fun)
    {
    case '+':
    {
        printf("Addition : %d", num1+num2);
    }
    break;
    case '-':
    
       // ans = num1 - num2;
        printf("Subtraction : %d", num1 - num2);

        break;
    case '*':
    
        // ans = num1 * num2;
        printf("Multiplication : %d", num1 * num2);

        break;
    case '/':
    {
    float ans =(float)num1 /(float)num2;
    printf("Division : %.2f", ans);

    break;
    }
    default:
        printf("plase enter valid input\n");
        goto up;
        break;
    }

    return 0;
}