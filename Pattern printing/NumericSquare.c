//WAP to print Numeric square 
#include <stdio.h>
void Star(int n , int m ){
    // For Row
    for (int i = 1; i <= n; i++)
    {
        // For Column
        for (int j = 1; j <= m; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return ;
}
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of Column : ");
    scanf("%d", &m);
    // For Row
    Star(n,m);
    return 0;
}
//done