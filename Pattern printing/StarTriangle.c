//WAP to print star Triangle  
#include <stdio.h>
void Star(int n ){
    // For Row
    for (int i = 1; i <= n; i++)
    {
       
        for (int j = 1; j <= i; j++)
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
    // int m;
    // printf("Enter number of Column : ");
    // scanf("%d", &m);
    Star(n);
    return 0;
}
//done
//