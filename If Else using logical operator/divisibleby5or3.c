//Tell if it is divisible by 5 or three 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        printf("It is Divisible by five or three");
    }
    else
    {
        printf("Not divisible by Five or three");
    }
    return 0;
}
//DONE