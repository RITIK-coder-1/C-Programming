#include <stdio.h>

int main ()
{
    // Unary Operator ---->
    int num1 = 25;
    int num2 = ++num1; // it first increases the value by 1 and then assigns // num1 = 26 & num2 = 26
    int num3 = num1++; // it first assigns the value and then increases // num1 = 27 & num3 = 26
    // printf("%d %d\n", num2, num3);

    // arithmetic ---->
    // printf("%d\n", num1 + 12); // addition // 39
    // printf("%d\n", num1 - 12); // subtraction // 15
    // printf("%d\n", num1 * 12); // multiplication // 324
    // printf("%d\n", num1 / 12); // division // 2 (integer)
    // printf("%f\n", num1 / 12.0); // division // 2.250000 (float)
    // printf("%d\n", num1 % 12); // modulus // remainder // 3

    // relational ---->
    // printf("%d\n", 12 > 13); // false // 0
    // printf("%d\n", 12 < 13); // true // 1
    // printf("%d\n", 12 >= 13); // false // 0
    // printf("%d\n", 12 <= 12); // true // 1

    // equality ---->
    // printf("%d\n", 12 == 13); // false // 0
    // printf("%d\n", 12 != 13); // true // 1

    // assignment --->
    int number = 12;
    int anotherNumber = 10;
    anotherNumber += number; // 22
    // printf("%d\n", anotherNumber);

    // bitwise --->
    int a = 10; // 1010
    int b = 24; // 11000
    // printf("%d\n", a & b); // 1000 // 8
    return 0;
}