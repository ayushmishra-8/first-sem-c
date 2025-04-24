// Code for guesss the right number

// stdio include basics function printf scanf etc.
// stdlib include function for choosing random number like srand and rand function
// time use for random number in every  program execution like  time function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int mynum, usernum;
    srand(time(NULL));
    mynum = rand() % 10;

    // Take input from user
    printf("\n\nI have a number in my mind. Can you Guess it?: ");
    scanf("%d", &usernum);

    while (1)
    {
        if (usernum == mynum)
        {
            printf("Congratulation! \nYou are right!!");
            break;
        }
        else if (mynum > usernum)
        {
            printf("My number is greater than %d.\nTry Again!\n\n",usernum);
        }
        else
        {
            printf("My number is smaller than %d.\nTry Again!\n\n",usernum);
        }
        printf("\nEnter new number: ");
        scanf("%d",&usernum);
    }
}
//Done 
//Perfecct code according to me.
