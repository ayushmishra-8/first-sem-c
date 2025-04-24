//print the greatest of them 3 numbers
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number A: ");
    scanf("%d", &a);

    int b;
    printf("Enter any number B: ");
    scanf("%d", &b);

    int c;
    printf("Enter any number C: ");
    scanf("%d", &c);

    if(a>b && a>c ){
        printf("A is greatest");
    }
    else if(b>c && b>a){
        printf("B is greatest ");
    }
    else if(c>a && c>b){
        printf("C is greatest ");
    }
    else if (a==b && b==c){
        printf("All number are equal ");
    }
    return 0 ;
}