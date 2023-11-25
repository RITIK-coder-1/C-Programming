#include <stdio.h> // pre-processor directive

int main(){ // main function
    // printf("hey\n"); 

    int num; // variable declaration
    num = 23; // variable assignment
    // printf("%d \n", num);
    num = 24; // variable reassignment
    // printf("%d \n", num);

    // integer data type --->

    int num1 = 23;
    int num2 = 24;
    // printf("num1 is %d & num2 is %d\n", num1, num2);
    // printf("There sum is %d\n", num1 + num2);

    // character data type --->

    char a = 'a';
    // printf("The given character is: %c \n", a);

    // Input --->
    int number1, number2;
    printf("*DISPLAY SUM OF ANY TWO NUMBERS* \n Enter the numbers: \n");
    scanf("%d %d", &number1, &number2);
    printf("The Sum: %d \n", number1 + number2);
    return 0;
}



