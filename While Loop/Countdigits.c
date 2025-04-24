
//Count the number of digits a number have, given by user ...
#include<stdio.h>
int main (){
    int n ;
    printf("Enter any number : ");
    scanf("%d",&n);
    int count = 0 ;
    while(n!=0){
        n=n/10;
        count++ ;
    }
    printf("The no. of Digits are : %d ", count);
}
//DONE