#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("It is Divisible by both five and three");
    }
    else
    {
        printf("Not divisible by Five and three both ");
    }
    return 0;
}
//DONE
//if a number is divisible by 15 then it is divisible by both 5 and 3 it means (n%15==0)