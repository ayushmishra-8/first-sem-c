// Prinnt Ap - 4,7,10,13,16,19...nth term
#include <stdio.h>
int main()
{
    int n;
    printf("Enter nth term :");
    scanf("%d", &n);
        for(int i = 4 ; i<=3*n-1; i=i+3){
            printf("%d\n", i);
        }
        return 0 ;
    }
    // DONE




    
    // prinnt this ap without math
//     int a = 4;
//     //   (first term of ap )
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d \n", a);
//         a = a + 3;
//     }
// }
