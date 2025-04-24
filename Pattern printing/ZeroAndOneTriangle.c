//                           1
//                           00  
//                           111
//                           0000
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of row : ");
    scanf("%d", &n);
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                int a = 0;
                printf("%d", a);
                a++ ;
            }
            else{
                int b = 1;
                printf("%d",b);
            }
        }
        printf("\n");
    }
    return 0;
}