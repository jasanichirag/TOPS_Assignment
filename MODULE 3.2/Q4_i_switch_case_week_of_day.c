#include<stdio.h>
int main(){
    
        //Q1)-->1. Monday to Sunday using switch case ;
        printf("print week of day:\nenter number between 1 to 7 :");
        int day;
        scanf("%d",&day);

        switch (day)
        {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("plase enter valid input !!");

        }

    return 0;
}