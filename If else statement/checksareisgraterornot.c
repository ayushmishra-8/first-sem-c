//Checks area of rectangle is grater than its arameter or not 

#include<stdio.h>
int main(){

    int l ;
    printf("Enter the Length of rectangle: ");
    scanf("%d", &l);
    int b ;
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);
    int p = 2*(l+b) ;
    int a = l*b ;
    if(a>p){
        printf("Area is greater than parameter");
    }
    if(a<p){
        printf("Parameter is grater than area ");
    }
    if(a==p){printf("Both are equal");
    }

    return 0 ;
}
//DONE