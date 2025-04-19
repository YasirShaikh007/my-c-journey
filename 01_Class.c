#include <stdio.h>

int main(){


    // ---------------DIFFERENT TYPES OF DATA-TYPE IN C---------------
    int num = 1;
    float f = 1.2;
    char c = 'Y';
    printf("The number is: %d\nThe Float is: %f\nThe character is: %c", num,f,c);
    
    
    // ---------------TO TAKE INPUT FROM THE USER---------------
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);      //--------------- { & } IS ADRESS OPERATOR
    printf("You entered: %d",a);


    // ---------------TO FIND SIZE OF DATA-TYPES---------------
    printf("\nSize of int: %zu", sizeof(int));
    printf("\nSize of float: %zu", sizeof(float));
    printf("\nSize of character: %zu", sizeof(char));


    
    // ---------------ESCAPE SEQUENCE---------------
    printf("\nThis is a class of\nc language"); //ADDS NEW LINE 
    printf("\nThis is a class of\tc language"); //ADDS SPACE OF A TAB
    printf("\nThis is a class of\"c language"); //ADDS DOUBLE INVERTED COMA 
    printf("\nThis is a class of\'c language"); //ADDS SINGLE INVERTED COMA 
    printf("\nThis is a class of\\ c language"); //ADDS BACKSLASH 
    printf("\nThis is a class of\\n c language"); //WE CAN EVEN ADD \n BY DOING THIS



    return 0;
}