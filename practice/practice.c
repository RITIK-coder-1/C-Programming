#include <stdio.h>

int main (){
    // printf("ritik\n");
    // printf("%d\n", 2 + 2);

    int length, breadth; 
    printf("Enter the given data: \n");
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle: %d\n", length*breadth);
    return 0;
}