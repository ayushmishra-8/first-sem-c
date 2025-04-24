//prime number -- who hass only two factor 1 and second itself eg 2,3,5,7,11..
//Composite number -- who has too many factor (all evens number except 2 are composite number ) 4,6,8,9,10...
//For chcking primme number we use BREAK statement 
//BREAK mtlv agr hogya to utne prr hi ruk jao loop khtm kro..
#include<stdio.h>
int main(){
int  a  ;
int  n = 0;
printf("Enter any number :\n");
scanf("%d",&a);
for(int i = 2 ; i<a-1 ; i++){
    if(a%i == 0 )
{
    n = 1 ;
    break;
}
}
if(a==0){printf("1 has neither prime and composite number ");
}
else if (n==0)
{
    printf("Prime number ");
}
else
{
    printf("Composite number ");
}
    return 0 ;
}
//DONE