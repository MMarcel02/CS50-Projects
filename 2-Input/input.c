#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("What's your name: ");
    
    fgets(str, sizeof(str), stdin);
    
    //This removes the \n that fgets usually creates automatically, 
    //  \0 tells functions where the string stops
    str[strcspn(str, "\n")] = '\0'; 
    
    printf("hello, %s", str);
    
    //Can add back the new line if you want
    printf("\n");
}