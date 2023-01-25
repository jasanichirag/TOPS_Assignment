#include<stdio.h>
#include<string.h>
void revstr(char str[],int i,int l){
  char ch;
  if (i>=l){
    return;
  }
  ch = str[i];
  str[i] = str[l];
  str[l] = ch;
  revstr(str, ++i,--l);
}
int main()
{

  //  Q3 ]  WAP to find reverse of string using recursion :
    printf("*reverse of string using recursion");
    char str[50];
    printf("\n\nENTER STRING : ");
    gets(str);
    revstr(str, 0, strlen(str) - 1);
    printf("REVERSE STRING : %s", str);
    return 0;
}


   