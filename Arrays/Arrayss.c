#include <stdio.h>
int main()
//wrong code for wave order printing --
// 123
// 456
// 789 

// 183
// 456
// 729
{
    int m;
    printf("Enter no. of rows:");
    scanf("%d", &m);
    int n;
    printf("Enter no. of columns :");
    scanf("%d", &n);
    int a[n][m];
    printf("Enter array elements : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int l;

    for (int i = 0; i < m; i++)

    {
        for (int j = 0; j < n; j++)
            if (j % 2 == 0)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                for(int f= m-1 ; m>=0 ; m--){
                  printf("%d ", a[f][j]);
                }
            }
    }

    printf("\n");

    return 0;
}