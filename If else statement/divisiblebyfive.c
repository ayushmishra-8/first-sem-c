//divisible by five or not 
#include<stdio.h>
int main(){
    int n ;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n%5==0)
    printf("%d is divisible by five",n);
    else{
        printf("%d is not divisible by five",n);
    }
    return 0 ;
}