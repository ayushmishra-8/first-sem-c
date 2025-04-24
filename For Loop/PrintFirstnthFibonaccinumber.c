//Print all fibonacci number till n  

#include<stdio.h>
int main(){
    int n ; 
    printf("Enter any number : ");
    scanf("%d",&n );
    int a =1 ;
    int b = 1; 
    int sum ;

    //using foor loop 

    for (int i = 1 ; i <=(n-2); i++){
        // this line is for printing  1 and 2 fibonacci number 
       // if(i<=2)printf("The %dth fibonacci is %d \n", i , a);
        sum = a+b ;
        a = b ;
        b = sum ;
        
        printf("The %dth fibonacci is %d \n", i+2 , sum );
    }
    
    return 0 ;
}
//Done