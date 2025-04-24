#include <stdio.h>
int main()
{

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int sum[2][2];

    printf("Program to sum od 2d array-\n");

    //First array
    printf("First array is :\n");
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //second array 
    printf("Second array is :\n");
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    //Sum of both array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    //Printing the 3 rd array sum array
    printf("\nThe sum of the array is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}