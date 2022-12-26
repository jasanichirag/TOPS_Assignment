#include <stdio.h>
int main()
{

    // 2. WAP to take 10 no. Input from user and find out …
    // input in arrey
    int num[10];
    int evenNum[10];
    int oddNum[10];
    printf("enter any TEN number :\n");
    for (int i = 0; i < 10; i++)
    { // input 10 number ;
        printf("%d--> ", i);
        scanf("%d", &num[i]);
        // storing in evenNum arry && oddNum arry
        if (num[i] % 2 == 0)
        {
            evenNum[i] = num[i];
            oddNum[i] = 0;
        }
        else
        {
            oddNum[i] = num[i];
            evenNum[i] = 0;
        }
    }

    // output :
    // output of input number :
    printf("your input number is :");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ,", num[i]);
    }
    // Q5)iii ]-->  How many Even numbers are there :
    //  even number :
    printf("\neven number is :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", evenNum[i]);
    }
    // Q5) iv]--> How many odd numbers are there :
    // odd number :
    printf("\nodd number is :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", oddNum[i]);
    }

    return 0;
}