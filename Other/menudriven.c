#include <stdio.h>

int main()
{   
    printf("1 for Even Odd");
    printf("\n2 for Factorial");
    printf("\n3 for Exit");
    int input;
    printf("\nEnter your input (From 1-3): ");
    scanf("%d", &input);
    
    

    switch (input)
    {
    case 1:
        int number;
        printf("Enter number to check Even or odd: ");
        scanf("%d", &number);
        if (number % 2 == 0)
            printf("%d is an Even Number\n", number);
        else
            printf("%d is an Odd number\n", number);
        break;
    case 2:
        int num;
        int fact = 1;
        printf("Enter number to calculate Factorial: ");
        scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        { 
            fact = fact * i;
        }
        printf("Factorial of the number %d is : %d\n", num, fact);
        break;
    case 3:
        printf("Exiting the program...\n");
        break;
    default:
        printf("Invalid input. Try Again.\n");
    }
    return 0;
}
//Vs code shows error but on chrome it run wells 