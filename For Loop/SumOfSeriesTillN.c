// print Sum of the series till n term ...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("THe sum till given term is : %d", sum);
    return 0;
}

// With help of math


// if (
//     n % 2 == 0 {
//         sum = -n / 2;
//     } else {
//         sum = -n / 2 + n;
//     }
//     printf("THe sum till given term is : %d", sum);
//     return 0 ;
// )