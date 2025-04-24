// Sum of  odd digits a number have ...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit = 0;
    while (n != 0)
    {
        lastdigit = n % 10;
        if (lastdigit % 2 != 0)
        {
            sum = sum + lastdigit;
        }
        n = n / 10;
    }
    printf("The sum of Even digits of given number is : %d", sum);

    return 0;
}
//DONE 