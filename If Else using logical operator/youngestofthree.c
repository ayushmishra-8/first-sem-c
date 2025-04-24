#include<stdio.h>
int main(){
    int r , s , a ;  //RAM SHYAM AJAY 
    printf("Enter the age of Ram : ");
    scanf("%d", &r);
     printf("Enter the age of Shyam : ");
    scanf("%d", &s);
     printf("Enter the age of Ajay : ");
    scanf("%d", &a);

    if(r<s && r<a){
        printf("Ram is youngest");
    }
    if(s<r && s<a){
        printf("Shyam is youngest");
    }
    if(a<s && a<r){
        printf("Ajay is youngest");
    }
    
    return 0 ;
}
//DONE