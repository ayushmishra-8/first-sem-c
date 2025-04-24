// Alphabet pyramid starts and end with Alphabet "A"
//     A
//    ABA
//   ABCBA
//  ABCDCBA

#include <stdio.h>
int main()

{
    int n;
    printf("Enter number of line: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // For Space printing
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Make a variable to print character 'A'
        char alpha = 'A';

        // For Print A to mid
        for (int k = 1; k <= i; k++)
        {
            printf("%c", alpha);
            alpha++;
        }

        // Make a variable to decrease the vale for printing Character
        char alpha2 = alpha - 2;

        // For  printing Alphabet from in decrasing order
        for (int l = 1; l <= i - 1; l++)
        {
            printf("%c", alpha2);
            alpha2--;
        }
        printf("\n");
    }
    return 0;
}
//Done 