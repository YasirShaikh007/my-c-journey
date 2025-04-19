#include<stdio.h>

int main(){

    // CONVERT CALCIUS TO FARHENHEIT
    int c, f;
    printf("CONVERT CELCIUS TO  FARHENHEIT\n\n");
    printf("Enter vlaue in celius: ");
    scanf("%d",&c);
    printf("Your Converted Value From Celcius To Farhenheit is: %f", (9.0/5.0)*c+32);
    return 0;
}