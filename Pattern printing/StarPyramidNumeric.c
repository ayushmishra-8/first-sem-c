//      1
//    1 2 3 
//   1 2 3 4 5
// 1 2 3 4 5 6 7 

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

    int nsp = line - 1;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        int print = 1 ;
        for (int k = 1; k <= nst; k++)
        {
            
            printf("%d",print);
            print++ ;
        }

        printf("\n");
        nst += 2;
        nsp -= 1;
    }
    return 0;
}
// Done
//For more clarity see the program of star pyramind provided in this folder