// Print reverse of  a given number  ...
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d", &n);

        int lastdigit = 0;
        while (n != 0)
        {
            lastdigit = n % 10;
            printf("%d",lastdigit);
            n=n/10 ;
        }
        return 0 ;
    }




    //There are two program to find reverse of a number -->

//     int r = 0 ;
//     while (n>0)
//     {
//         r=r*10 ;
//         r = r + (n%10) ;
//         n = n/10 ;
//     }
//     printf("The reverse number is %d", r);

    
//     return 0;
// }

//Done