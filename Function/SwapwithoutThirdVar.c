#include <stdio.h>  
void swap(int , int); //prototype of the function   
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); 
    swap(a,b);  
   
}  
void swap(int a, int b ){
    a= a+b ;
    b= a-b ; 
    a= a-b ;
    printf("After swapping values in main a = %d, b = %d\n",a,b);
}