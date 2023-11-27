// Multiplication Table ---->

#include <stdio.h>

void table (){
    int number;
    printf("Enter any number to get its first 10 multiples: ");
    scanf("%d", &number);
    for(int i = 1; i <= 10; i++){
        int product = number * i;
        printf("%d\n", product);
    }
}

int main ()
{
    table();
}