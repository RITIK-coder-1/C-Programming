#include <stdio.h>

int main ()
{
    int arr1[3] = {1, 2, 3};
    printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);

    int arr2[2];
    printf("Enter your first number: ");
    scanf("%d", &arr2[0]);

    printf("Enter your second number: ");
    scanf("%d", &arr2[1]);
    
    printf("Their sum: %d\n", arr2[0] + arr2[1]);
    return 0;
}