// Print table of n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number :");
    scanf("%d", &n);
    for (int i = n; i <= n * 10; i = i + n)
    {
        printf("%d \n", i);
    }
    return 0;
}
// DONE