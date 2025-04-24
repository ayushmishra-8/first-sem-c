// WAP to chick fiven number is armstrong number or not
#include <stdio.h>
int main()
{
    int x, num,numm, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    numm = num ; // After the loop ends the value of nu is reduced to 0 so to avoid this simply store the value of num in another variables 

    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum = sum + x * x * x;
    }
    
    if (sum == numm)
    {
        printf("THe number is armstrong number ");
    }
    else
    {
        printf("Not armstrong number ");
    }
    return 0;
}
//Done 