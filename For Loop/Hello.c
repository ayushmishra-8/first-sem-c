#include<stdio.h>
int main(){
    int n ;
    printf("Enter number of times you want to print Hello : ");
    scanf("%d", &n);
    for(int i = 1 ; i<=n ; i++ ){
        printf("Hello world \n");
    }
    return 0 ;
}
//DONE