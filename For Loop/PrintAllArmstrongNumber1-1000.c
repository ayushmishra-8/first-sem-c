//Program to print all the armstrong number till 1000
#include <stdio.h>
int main()
{
    int i, num, sum, x, mem;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0 ;
        num = i;
        

        while (num > 0)
        {
            x = num % 10;
            num = num / 10;
            sum = sum + x * x * x;
        }
        if (sum == i)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}
//DONE