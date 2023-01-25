#include<stdio.h>
#include<string.h>
int main()
{

    // Q9]--> Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) ;
    printf("*enter number and get max number form given number :\n");
    int num;
    int max = 0;
    printf("ENTER NUMBER : ");
    scanf("%d", &num);
    int i = 0;
    int arr[i];
    while (num>=9)
    {
          arr[i] = num % 10;
          num = num / 10;
        i++;
    }
    arr[i]=num;
    for (int j = 0; j <=i;j++){
        if (arr[j]>max)
        {
            max = arr[j];
        }
        
    //    printf("%d,", arr[j]);
    }
    printf("\nMAX DIGIT : %d", max);
    return 0;
}