// Print triangle like this
//       A
//     A B
//   A B C
// A B C D

//Done 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Row: ");
    scanf(" %d", &n);
    int m;
    printf("ENyer number of Column: ");
    scanf(" %d", &m);

    for (int i = 1; i <= n; i++)
    {
        char ch='A';
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)   //(int k = 1; k <= m; k++)(use this condition to print a rhombus)
        {
            printf("%c",ch);               //USE SPACE BEFORE OR AFTER THE %C AND SEE TTHE MAGIC 
            ch++ ;
        }
        printf("\n");
    }
    return 0 ;
}
//Done 