//ulta triangle
#include <stdio.h>
void star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
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
    star(n);
    return 0;
}
//Done