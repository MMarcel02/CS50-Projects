#include <stdio.h>

void meow(int n); //This is the prototype of a function, since meow
                 //is created after int main(void), we need to mention
                 //it here to avoid an error 

int main(void) {
    // While loop:

    // int counter = 0;
    // while (counter < 5)
    // {
    //     printf("meow\n");
    //     counter++;
    // }

    //For loop:

    // for(int i = 0; i < 5; i++)
    // {
    //     printf("meow\n");
    // }

    //since we moved the for loop into the function we can just simplify here
    meow(3); 
}

//Creating a function:

void meow(int n)
{
    for (int i = 0; i < n; i++){
        printf("meow\n");
    }
}

