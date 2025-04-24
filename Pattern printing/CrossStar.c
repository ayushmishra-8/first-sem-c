// Print cross star likr this    *    *
//    *  *
//     *
//    *  *
//   *    *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row\n\n(both row and column are equal for this question ): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || (i + j) == (n + 1))
                printf("*");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Print successfull");
}
//Done
