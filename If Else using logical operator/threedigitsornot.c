// CHECK A NUMBER IS THREE DIGIT NUMBER OR  NOT 
#include<stdio.h>
int main(){
int n ;
printf("Enter any number: ");
scanf("%d",&n);
if(n>99 && n<1000){
    printf("The number is three digits number");
}
else {
    printf("Not a Three digit number");
}
    return 0 ;
}
//DONE