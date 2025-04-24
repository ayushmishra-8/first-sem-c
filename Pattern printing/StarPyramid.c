//     *
//    ***
//   *****
//  *******
// W.A.P tp print the pattern

#include <stdio.h>
int main()
{
    int line;
    printf("Enter the number of line : ");
    scanf("%d", &line);
    // For number of space nsp
    int nst = 1;

    // For number of star nst

    // int nsp = line - 1;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= (line-i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }

        printf("\n");
        nst += 2;
        // nsp -= 1;
    }
    return 0;
}
// Done