// Given three point falls on one straight line or not
#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3 ;
    printf("Enter the value of point X1 and Y1 :");
    scanf("%d %d", &x1, &y1);

    printf("Enter the value of point X2 and Y2 :");
    scanf("%d %d", &x2, &y2);

    printf("Enter the value of point X3 and Y3 :");
    scanf("%d %d", &x3, &y3);

    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        printf("Points falls on one straight line");
    }
    else{
        printf("Points are not falls on one straight line");
    }

    return 0;
}
//DONE