#include <stdio.h>

int main(void)
{
    int y;
    int x;

    printf("y: ");
    if(scanf("%d", &y) == 1)
    {
        printf("x: ");
        if(scanf("%d", &x) == 1)
        {
            if (x > y)
            {
                printf("x is greater than y\n");
            }
            else if (x < y)
            {
                printf("x is less than y\n");
            }
            else 
            {
                printf("x is equal to y\n");
            }

        }
        else
        {
            printf("Invalid input! Please enter an integer.\n");
        }
    }
    else {
        printf("Invalid input! Please enter an integer.\n");
    }
}