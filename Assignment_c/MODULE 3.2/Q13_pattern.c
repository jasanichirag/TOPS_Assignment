#include<stdio.h>
int main()
{

    printf("PATTERN :-\n\n");
    printf("1]==>\n");
    printf("ENTER ROW :");
    int row;
    scanf("%d", &row);
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           if (j%2==0)
           {
               printf("0 ");
           }else{
               printf("1 ");
           }
           
        }
        printf("\n");
    }
     printf("\n\n\n");
     printf("2]==>\n");
     char ch = 'A';
     for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=i; j++)
    {
           printf("%c ", ch++);
         }
         printf("\n");
     }
     printf("\n\n\n");
     printf("3]==>\n");
     int a=1;
     for (int i = 1; i <=row; i++)
     {
         for (int j = 1; j <=i; j++)
         {
             printf("%d ", a++);
         }
         printf("\n");
     }
     printf("\n\n\n");
     printf("4]==>\n");
     for (int i = 1; i <= row; i++)
     {
         char a1 = 'A';
         for (int j = 1; j <= i; j++)
         {
             printf("%c ", a1++);
         }

         printf("\n");
    }
    printf("\n\n\n");
    printf("5]==>\n");
    
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=1; j++)
        {
            for (int k = 1; k <=row-i; k++)
            {//space print
                printf("  ");
            }
            for (int l = 1; l <=i; l++)
            {
                printf(" *");
            }
            for (int o = 2; o <=i; o++)
            {
                printf(" *");
            }
            
        }
            printf("\n");

    }
    printf("\n\n\n");
    printf("6]==>\n");
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = row; i >=1; i--)
    {
        for (int j = 1; j <=i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}