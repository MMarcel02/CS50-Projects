#include <stdio.h>

int main(void){

    int size;

    // Keep asking for positive non-zero integer
    while (1) {
        printf("Size: ");
        if (scanf("%d", &size) == 1 && size > 0) {
            break;
        } else {
            // getchar() reads input field one character at a time
            // and discards them until it reaches \n (which is left by scanf)
            // at this point the loop restarts again from the Size: prompt
            while (getchar() != '\n');
            printf("Invalid input. Please enter a positive integer.\n");
        }
    }

    for (int i = 0; i < size; i++){
        for (int k = size - i; k > 1; k--){
            printf(" ");
        }
        for (int j = -1; j < i; j++){
            printf("#");
        }
        printf("  ");
        for (int j = -1; j < i; j++){
            printf("#");
        }
        printf("\n");
    }
}