#include <stdio.h>
#include <string.h>
int main()
{

    // Q8 ]  WAP to reverse a string and check that the string is palindrome or not :
    printf("*reverse a string and check that the string is palindrome or not :\n");
    char strin[50];
    printf("\nENTER STRING :");
    gets(strin);
    char revstr[50];
    strcpy(revstr, strin);
    strrev(revstr);
    printf("\norigenial string : %s\nreverce string   : %s\n\n", strin, revstr);

    if (strcmp(strin, revstr) == 0)
    {
        printf("String Is Palindrome");
    }
    else
    {
        printf("String Is Not Palindrome !!");
    }

    return 0;
}