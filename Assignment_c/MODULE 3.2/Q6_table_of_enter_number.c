#include<stdio.h>
int main(){
    //Q6 )--> WAP to print table up to given numbers

    printf("enter number you want table:\n");
    printf("ENTER NUMBER :");
    int n ;
    scanf("%d", &n);
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d x %d= %d \n", n, i, n * i);
    }
  //  getch(); application fille koik ne aapva mate code compailar ma run thashe 
            // code nu out put batavshe  code nai 

    return 0;
}