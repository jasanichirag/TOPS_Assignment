#include<stdio.h>
int fect(int num){
    if (num>1)
    {
    return  num * fect(num - 1);
    }
    
}
int main()
{
    // Q4]  WAP to find factorial using recursion:

    printf("*factorial using recursion");
    int num;
    printf("\nENTER NUMBER :");
    scanf("%d", &num);
    int ans=fect(num);
    printf("FECTORIAL = %d",ans);
    return 0;
}