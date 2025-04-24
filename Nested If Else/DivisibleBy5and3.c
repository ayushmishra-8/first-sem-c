// Divisible by 5 and 3 without using logical operator
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("Number is divisible by both five and three ");
        }
        else
        {
            printf("Number is not divisible by five and three");
        }
    }
    else
    {
        printf("Number is not divisible by five and three");
    }
    return 0;
}
//Done