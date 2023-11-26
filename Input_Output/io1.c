// Formatted I/O ------------->

#include <stdio.h>

int main(){
    int num1 = 23;
    printf("%d\n", num1); // output
    printf("The number is: %d\n", num1); // output with literal characters

    int num2;
    printf("Enter the number: ");
    scanf("%d", &num2); // taking input
    printf("%d\n", num2); // displaying the input as output
}