//Code to print triangle with the combination of both number and alphabet
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
//Done