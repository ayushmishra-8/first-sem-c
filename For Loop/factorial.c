//Print the factorial of nth number 

#include<stdio.h>
int main (){
    int n ;
    printf("Enter any number : ");
    scanf("%d", &n);
    int product = 1;

    //Using for loop to solve this 
    
    for(int i = 1 ; i<=n ; i++){
        product = product * i ;

    }
    printf("THe factorial of given number is : %d", product);
    return 0 ;
}
//Done 