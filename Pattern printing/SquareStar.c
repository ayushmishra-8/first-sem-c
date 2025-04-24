//WAP to print star square 
#include <stdio.h>
void Star(int n , int m ){
    // For Row
    for (int i = 1; i <= n; i++)
    {
        // For Column
        for (int i = 1; i <= m; i++)
        {
            printf("*");
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