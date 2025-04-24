//Checks the seller made profit or loss on sell and how much...

#include <stdio.h>

int main() {
    int cp;
    printf("Enter cost price: ");
    scanf("%d", &cp);

    int sp;
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp < cp) {
        printf("Incurred loss \n");
         printf("Made loss=%d",cp-sp);
    } else if (sp > cp) {
        printf("Made Profit \n");
        printf("Made Profit=%d", sp-cp);
    } else {
        printf("No profit No loss");
        
    }

    return 0;
}
//DONE