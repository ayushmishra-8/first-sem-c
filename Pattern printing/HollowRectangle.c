// Print hollow rectangle    *******
//                           *     *
//                           *     *
//                           *******
#include <stdio.h>
int main()
{
    printf("Program for hollow rectangle like this\n ");
    printf("*******\n");
   printf(" *     *\n");
   printf(" *     *\n");                      
    printf("  ******\n");                       
    int n;
    printf("Enterr the no. of row : ");
    scanf("%d", &n);
    int m;
    printf("Enter thhe no. of column: ");
    scanf("%d",&m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1 || i == n || j == m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Pattern printing Successful");
    return 0;
}
//Done