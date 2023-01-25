#include <stdio.h>
int main()
{

    // 2. WAP to take 10 no. Input from user and find out …
    // input in arrey
    int num[10];
    int evenNum[10];
    int oddNum[10];
    int evenNumIncriment = 0;
    int oddNumIncriment = 0;
    int evenNumSum = 0;
    int oddNumSum = 0;
    printf("ANS)5.ii)  =>  enter any TEN number :\n");
    for (int i = 0; i < 10; i++)
    { // input 10 number ;
        printf("num. %d ) : ", i);
        scanf("%d", &num[i]);
        // storing in evenNum arry && oddNum arry
        if (num[i] % 2 == 0)
        {
            evenNum[i] = num[i];
            oddNum[i] = 0;
            evenNumIncriment++;
            evenNumSum += num[i];
        }
        else
        {
            oddNum[i] = num[i];
            evenNum[i] = 0;
            oddNumIncriment++;
            oddNumSum += num[i];
        }
    }

    // output :
    // output of input number :
    printf("\n => your input number is :");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ,", num[i]);
    }
    printf("\n");

    // Q5)iii ]-->  How many Even numbers are there :
    //  even number :

    printf("\nANS)5.iii) =>  number of even numbers : %d ", evenNumIncriment);
    printf("\n           =>  even number is :");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", evenNum[i]);
        //  evenNumSum += evenNum[i];
    }
    // Q5) iv]--> How many odd numbers are there :
    // odd number :
    printf("\nANS)5.iv)  =>  number of odd :%d ", oddNumIncriment);
    printf("\n           =>  odd number is :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", oddNum[i]);
        // oddNumSum += oddNum[i];
    }
    printf("\nANS)5.v)   =>  even number sum = %d ", evenNumSum);
    printf("\nANS)5.vi)  =>  odd number sum = %d \n", oddNumSum);

    return 0;
}