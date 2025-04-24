// Print reverse  and sum of both of a given number  ...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);

    int sum = 0;
    int lastdigit = 0;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        lastdigit = n % 10;
        r = r + lastdigit;
        sum = sum + lastdigit;
        n = n / 10;
    }
    printf("The sum of the number is : %d \n", sum);
    printf("THe reverse of number is : %d", r);
    return 0;
}
//DONE