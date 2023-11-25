// Calculate Area of a circle --->

#include <stdio.h>

int main(){
    printf("The Area Of a Circle: 3.14 * radius squared \nEnter the radius: ");
    int radius;
    scanf("%d", &radius);
    printf("The Area: %f\n", 3.14 * radius * radius);
}