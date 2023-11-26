// Unformatted I/O ---------->

#include <stdio.h>

int main ()
{
    printf("Enter a single character: ");
    char num1 = getchar(); // gets a single character
    putchar(num1); // displays the character

    char num2[10];
    printf("Enter any character: ");
    // gets(num2); // it is used to get multiple characters // but have been deprecated due to security vulnerabilities // modern C compilers don't let it be used
    puts(num2); // displays multiple characters 
    
    return 0;
}