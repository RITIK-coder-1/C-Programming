// Calculate Perimeter of a rectangle --->

#include <stdio.h>

int main(){
    printf("The Perimeter of a rectangle: 2(l + b)\n");

    printf("Enter the length: ");

    int length;
    scanf("%d", &length);

    printf("Enter the breadth: ");

    int breadth;
    scanf("%d", &breadth);

    printf("The Perimeter: %d\n", 2 * (length + breadth));

    return 0;
}