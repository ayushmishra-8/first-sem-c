// Divisible by 5 and 3 but not by 15 without using logical operator
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("The number is  matching the required condition ");
        }
        else
        {
            printf("The number is not matching the required condition bbecause it is divisible by 15 also");
        }
    }
    else 
    {
        printf("The number is not matching the required condition ");
    }
    return 0 ;
}
//DONE