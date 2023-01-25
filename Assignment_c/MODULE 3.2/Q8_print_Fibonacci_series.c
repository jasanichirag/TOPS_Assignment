#include <stdio.h>

int main()
{
    // Q7)   print Fibonacci series up to given numbers :
    // 0, 1, 1, 2, 3, 5, 8, 13, 21

    int num, n1 = 0, n2 = 1, n3;
    printf("enter number :");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d, ", i);
        }
        else
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            printf("%d, ", n3);
        }
    }
    // 0, 1, 1, 2, 3, 5, 8, 13, 21
    // printf("enter number and get Fibonacci series : ");
    // int num,n1=0,n2=1,n3;
    // scanf("%d", &num);
    // printf("%d,%d,", n1, n2);
    // for (int i = 2; i < 10; i++)
    // {
    //     n3 = n1 + n2;
    //     n1=n2;
    //     n2 = n3;
    //     printf("%d,", n3);
    // }

    return 0;
}