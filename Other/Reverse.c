#include<stdio.h>
int main (){
    char first, second ,third;
    printf("Enter first word:");
    scanf(" %c",&first);

    printf("Enter second word:");
    scanf(" %c",&second);

    printf("Enter third word:");
    scanf(" %c",&third);

    printf("The reverse of enter character is :%c %c %c",third, second,first );
    return 0 ;
}