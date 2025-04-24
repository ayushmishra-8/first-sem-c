//Print AP 1, 3,5,7,9, UPTO n ...
#include<stdio.h>

int main() {
    int n;
    printf("Enter nth term:");
    scanf("%d", &n);
int i ;
    for (i = 1; i <= 2 * n - 1; i = i + 2) {
       printf("%d\n", i);
    }
     
    return 0;
}
