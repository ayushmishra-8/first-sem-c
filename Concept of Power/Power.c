// WAP to Find the value of one number is raised to the power of another
#include <stdio.h>
int main()
{
    int a;
    int b;
    int power = 1;
    printf("Enter base : ");
    scanf("%d", &a);

    printf("Enter power : ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        power = a * power;
    }


    printf("%d raised to %d is %d", b, a, power);
    return 0;
}
//DONE