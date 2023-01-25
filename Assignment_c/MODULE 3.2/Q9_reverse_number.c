#include<stdio.h>
#include<string.h>
int main()
{
    //Q7]--> WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746 
    // [1] frist mathod :-

    // printf("*enter number and get reverse number :-\n");
    // char number[50];
    // printf("ENTER NUMBER : ");
    // scanf("%s", &number);
    // printf("REVERSE NUMBER : %s", strrev(number));


    //  [2] second method :-

    //     for (int i = strlen(number); i >= 0; i--)
    //     {
    //         printf("%c", number[i]);
    // }

    // [3] third method :-
    int num, r;
    printf("enter namber: ");
    scanf("%d" ,&num);

    while (num != 0)
    {
        r = num % 10;
      //  rev = rev * 10 + r;
        num /= 10;

        printf("%d", r);
    }

    return 0;
}