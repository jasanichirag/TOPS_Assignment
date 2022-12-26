#include<stdio.h>
int main(){
    // Q)3)-->o find area of circle, rectangle and triangle

    printf("find area of circal :-\n\nenter radius value :");
    // formula ==>  A=pi*(r*r)
    int r;
    scanf("%d", &r);
    r = r * r;
    float area = 3.14 * r;
    printf("area of circal = %f m square\n \n\n****\n \n", area);

    printf("find area of rectangle :-\n\nenter Length value :");
    // formula ==> A= L*B
    int L;
    scanf("%d", &L);
    printf("enter Breadth value :");
    int B;
    scanf("%d", &B);
    printf(" area of rectangle = %dcm square\n \n\n****\n \n", L * B);

    printf("find area of triangle :-\n\nenter base value :");
    // formula ==> A = 1/2 × b × h
    int b;
    scanf("%d", &b);
    printf("enter height value :");
    int h;
    scanf("%d", &h);
    float areaOfTringle = (float)b * (float)h;
    printf("area of tringle = %.3fcm square\n \n", areaOfTringle / 2);

    return 0;
}