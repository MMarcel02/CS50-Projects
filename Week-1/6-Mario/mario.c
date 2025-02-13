#include <stdio.h>

int main(void){

    int size;

    do{
        printf("Size: ");
        scanf("%d", &size);
    } while (size < 1);

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("#");
        }
        printf("\n");
    }
}