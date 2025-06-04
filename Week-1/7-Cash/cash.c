#include <stdio.h>

int main(void){
    int coinCounter, changeOwed, quarters, dimes, nickels;

    while(1) {
        printf("Change owed: ");
        if (scanf("%d", &changeOwed) == 1 && changeOwed >= 0){
            break;
        } else {
            while (getchar() != '\n');
            printf("Enter a valid character!\n");
        }
    }

    quarters = changeOwed/25;
    changeOwed = changeOwed - quarters*25;

    dimes = changeOwed/10;
    // We can also use the % operator
    changeOwed = changeOwed % 10;

    nickels = changeOwed/5;
    // We can simplify even more
    changeOwed %= 5;

    coinCounter = quarters + dimes + nickels + changeOwed;


    printf("The min number of coins to give out: %i\n", coinCounter);

}
