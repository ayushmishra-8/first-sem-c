#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    int m = n - 1;
    int nst = m;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("*");
        }
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= m; i++)
        {
            printf("*");
        }
        m-- ;
        nsp += 2;
        printf("\n");
    }

    return 0;
}
// DONE