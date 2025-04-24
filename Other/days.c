#include<stdio.h>
int main(){
    float enterdays,year,weak;
    printf("Enter no. of days: ");
    scanf(" %f",&enterdays);

    year=(enterdays/365);
    weak=(enterdays/7);

    printf("\nYears:%f",year);
    printf("\nweaks: %f",weak);
    return 0 ;

}