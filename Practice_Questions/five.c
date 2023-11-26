// Arithmetic Operation ---->

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d", &num1);
    printf("And, : ");
    scanf("%d", &num2);

    printf("Their Sum: %d\n", num1 + num2);
    printf("Their Sub: %d\n", num1 - num2);
    printf("Their product: %d\n", num1 * num2);
    printf("Their Quotient: %d\n", num1 / num2);
    printf("Their Remainder: %d\n", num1 % num2);
}