                                      
                                      //Take two integer input a &b && a>b print the remainder  when a /b ..
#include<stdio.h>
int main(){
int a,b ; //a>b
printf("Enter divident:");
scanf("%d", &a);

printf("Enter divisor:");
scanf("%d", &b);

int q = a/b ;
int r = a-(b*q) ;
printf("The remainder when %d is divided by %d is %d ", a,b,r);


    return 0 ;
}      
//DONE                                