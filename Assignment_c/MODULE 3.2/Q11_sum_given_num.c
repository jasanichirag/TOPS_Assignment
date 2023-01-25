#include<stdio.h>
int main()
{

  //  Write a program make a summation of given number(E.g., 1523 Ans: -11)
  int num;
  printf("*enter number and get summation of given mumber: \n");
  printf("ENTER NUMBER :");
  scanf("%d",&num);
  int sum = 0;
while (num>=9)
{
  sum += num % 10;
  num = num / 10;
}

sum += num;
printf("SUMMITION OF GIVEN NUMBER : %d", sum);

return 0;
}