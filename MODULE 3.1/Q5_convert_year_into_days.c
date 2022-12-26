#include<stdio.h>
int main(){

    // Q)5)--> convert years into days and days into years ;
    printf("convert years into days :\nenter years :");
    int years;
    scanf("%d", &years);

    printf("years into days = %d days\n", years * 365);

    printf("\n\nconvert days into years :\nenter days :");
    int days;
    scanf("%d", &days);
    float ans = (float)days / (float)365;
    printf("days into years = %.3f year", ans);
    return 0;
}