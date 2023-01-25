#include <stdio.h>
int main()
{

    // Q 6] WAP to make addition, Subtraction and multiplication of two matrix using 2 - D Array :
    printf("*make addition, Subtraction and multiplication of two matrix using 2 - D Array\n");
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    int sum = 0;
    printf("\nENTER ARRAY1 VALUE : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter num : ");
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nENTER ARRAY2 VALUE : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter number : ");
            scanf("%d", &arr2[i][j]);
        }
    }
    //*output:
    printf("\nARRAY1 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nARRAY2 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", arr2[i][j]);
        }
        printf("\n");
    }

    // *two array addition :
    printf("\n\nAddition :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    // *two array Subtraction :
    printf("\nSubtraction :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
    // *two array multiplication :
    printf("\nMultiplication :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
