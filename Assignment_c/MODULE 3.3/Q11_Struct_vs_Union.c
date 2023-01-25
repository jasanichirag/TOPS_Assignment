#include <stdio.h>
struct structur
{
    int id;
    char name[15];
    char add[20];
    int age;
};
union unian
{
    int id;
    char name[15];
    char add[20];
    int age;
};

int main()
{

    // Q11 ]  WAP to show difference between Structure and Union. :
    struct structur s;
    union unian u1;
    printf("\nStructure Size %d", sizeof(s));
    printf("\nId Size       %d", sizeof(s.id));
    printf("\nName Size     %d", sizeof(s.name));
    printf("\nAge Size      %d", sizeof(s.age));
    printf("\naddress Size  %d", sizeof(s.add));

    printf("\n\nUnion Size   %d", sizeof(u1));
    printf("\nId Size      %d", sizeof(u1.id));
    printf("\nName Size    %d", sizeof(u1.name));
    printf("\nAddress Size %d", sizeof(u1.add));
    printf("\nAge Size     %d", sizeof(u1.age));

    return 0;
}