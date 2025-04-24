// Numeric Pyramid starts and end with 1
//       1
//      121
//     12321
//    1234321

#include <stdio.h>
int main()
{
    int n;
    int k = 0;
    printf("Enter the number of line : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // To print Space
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // To print number start to mid

        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        // Here we also use int a = k-2;
        int a = i - 1;

        // To print number in decreaseing order after mid

        for (int l = 1; l <= i - 1; l++)
        {
            printf("%d", a);
            a = a - 1;
            ;
        }
        printf("\n");
    }
    return 0;
}
//Done 