#include <stdio.h>
// ASCENDING FUNCTION :
void ascending(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        for (int j = i; j <size; j++)
        {

            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}// DESCENDING FUNCTION :
void descending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {

            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// PRINT FUNCTION :
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    
}
int main()
{

    // Q5 ]   WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice :
    printf("\t*two Array input from user and sort them in ascending or descending order as per user\'s choice :\n");
    int size1, size2;
    printf("ENTER SIZE OF ARRAY-1 :");
    scanf("%d", &size1);
    int arr1[size1];
    // input array 1;
    for (int i = 0; i < size1; i++)
    {
        printf("enter number :");
        scanf("%d", &arr1[i]);
    }

    printf("\nENTER SIZE OF ARRAY-2 :");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("enter number :");
        scanf("%d", &arr2[i]);
    }
input:
    printf("\n\nSORT BY ASCENDING ORDER FOR PRESS --> [1]\nSORT BY DESCENDING ORDER FOR PRESS --> [2]\n");
    int in;
    printf("INPUT : ");
    scanf("%d", &in);
    printf("\n");
    if (in==1)
    {
        printf("ASCENDING ARRAY :");
        ascending(arr1, size1);
        ascending(arr2, size2);
        printf("\nARRAY[1] = ");
        print(arr1, size1);
        printf("ARRAY[2] = ");
        print(arr2, size2);
    }else if (in==2)
    {
        printf("DESCENDING ARRAY :");
        descending(arr1, size1);
        descending(arr2, size2);
        printf("\nARRAY[1] = ");
        print(arr1, size1);
        printf("ARRAY[2] = ");
        print(arr2, size2);
    }else
    {
        printf("plase enter valid input !!");
        goto input;
    }
 
    return 0;
}