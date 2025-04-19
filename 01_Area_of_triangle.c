#include<stdio.h>

int main(){
     // FINDING AREA OF RECTANLE WITH FIX VALUES
    // int lenght = 5, breath = 12;
    // printf("The area of rectangle is: %d", lenght*breath);

    
    // FINDING AREA OF RECTANLE WITH USER INPUT
    int length, breath;
    printf("\nEnter Lenght: ");
    scanf("%d", &length);
    printf("Enter breath: ");
    scanf("%d", &breath);
    
    printf("\nThe Area of rectangle is found to be: %d", length*breath);
    return 0;
}