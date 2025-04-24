//program for checkinf a yyear is leap year or not 
#include<stdio.h>
int main(){
    int year ;
    printf("Enter any year:");
    scanf("%d",&year);
    if(year%4==0)
    printf("%d is a Leap year",year);
    else{
        printf("%d is not a leap year",year);
    }
    return 0 ;
}
//DONE