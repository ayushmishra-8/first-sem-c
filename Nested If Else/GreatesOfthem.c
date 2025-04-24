// Greatest among them three number by using nested if else
#include <stdio.h>
int main()
{
    int n, m, o;
    printf("Enter any number n : ");
    scanf("%d", &n);
  
    printf("Enter any number m : ");
    scanf("%d", &m);
  
    printf("Enter any number o : ");
    scanf("%d", &o);

    if (n > m)
    {
        if (n > o)
        {
            printf("Number n is greatest among them ");
        }
        else
        {
            printf("number o is greatest");
        }
    }
    else
    {
        if (m > n)
        {
            if (m > o)
            {
                printf("Number m is greatest among them ");
            }
            else
            {
                printf("Number o is greatest among them ");
            }
        }
    }
    return 0 ;
}
//DONE