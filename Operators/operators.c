#include <stdio.h>

int main ()
{
    // Unary Operator ---->
    int num1 = 25;
    int num2 = ++num1; // it first increases the value by 1 and then assigns // num1 = 26 & num2 = 26
    int num3 = num1++; // it first assigns the value and then increases // num1 = 27 & num3 = 26
    printf("%d %d\n", num2, num3);


    return 0;
}