#include <stdio.h>
#include <string.h>
int main()
{

    // Q7 ]  WAP Find out length of string without using inbuilt function :
    printf("*Find out length of string without using inbuilt function :\n");
    printf("\nENTER STRING : ");
    char str[50];
    int count = 0;
    gets(str);
    int a = strlen(str);
    //     for (char i; str[i] != 0; i++)
    //     {
    //         count++;
    // }

    while (str[count] != 0)
    {
        count++;
    }

    printf("length of string = %d", count);

    return 0;
}