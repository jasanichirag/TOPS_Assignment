#include<stdio.h>
int main(){

    // Q2)--> Vowel or Consonant using switch case ;
    printf("\n\ncheck alfabate is Vowel or Consonsnt : \n");
    printf("enter alphabet \"a-z\" :");
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\nthis is vowel=\'%c\'", ch);
        break;
    default:
        printf("\nthis is consonant= \'%c\'", ch);
    }
    return 0;
}