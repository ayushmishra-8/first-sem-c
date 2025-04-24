//By taking extra variable
#include<stdio.h>
void star (int n )
{
    int a = n ;
    for(int i = 1 ; i<=n ; i++)
    {
        for(int j=1; j<=a ; j++)
        {
            printf("*");
        }
        a=a-1;
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
//done