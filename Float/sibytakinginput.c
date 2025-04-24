// Calculatinng simple intrest by taking input fromm thr user

#include <stdio.h>
int main()
{
float p,r,t,si ;
printf("Enter the amount of principal :");
scanf("%f",&p);

printf("Enter the Rate:");
scanf("%f",&r);

printf("Enter the time:");
scanf("%f",&t);

si = (p*r*t)/100 ;

printf("Your simple intrest is : %f",si);
    return 0;
}
//DONE
