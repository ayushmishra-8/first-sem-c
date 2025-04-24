//print the greatest of them, 4 numbers

#include <stdio.h>

int main() {
    int a;
    printf("Enter any number A: ");
    scanf("%d", &a);

    int b;
    printf("Enter any number B: ");
    scanf("%d", &b);

    int c;
    printf("Enter any number C: ");
    scanf("%d", &c);

    int d;
    printf("Enter any number D: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d) {
        printf("A is greatest");
    } else if (b > c && b > a && b > d) {
        printf("B is greatest ");
    } else if (c > a && c > b && c > d) {
        printf("C is greatest ");
    } else if (d > a && d > b && d > c) {
        printf("D is greatest ");
    } else {
        printf("All numbers are equal ");
    }

    return 0;
}
//DONE