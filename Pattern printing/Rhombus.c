// ...****
// ..****.
// .****..
// ****...
// Code for printing this type of pattern

// NCORRECT CODE

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbber of rows:");
    scanf("%d", &n);
    int m;
    printf("Enter the numbber of columns:");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)

        // For hash
        { 
            printf("#");
        }
        for (int k = 1; k <= n; k++)

        // For Astrisks
        { 
            printf("*");
        }
        for (int l = 1; l <= (i - 1); l++)

        // For hash
        { 
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
//Done 