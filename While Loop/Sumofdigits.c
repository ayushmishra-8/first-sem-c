// Prints the sum of digits given in input..
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
        sum = sum + lastdigit;
        n = n / 10;
    }
    printf("Sum of digits are : %d", sum);
    return 0;
}
// Done