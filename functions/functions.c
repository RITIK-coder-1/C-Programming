#include <stdio.h>

void add(int num1, int num2){
    int sum = num1 + num2;
    printf("%d\n", sum);
}

void greetings(){

    char nationality;
    printf("Enter I for Indian, F for French, or Something else: ");
    scanf("%c", &nationality);

    if (nationality == 'I'){
        printf("Namaste\n");
    } else if (nationality == 'F'){
        printf("Bonjour\n");
    } else {
        printf("Hello\n");
    }

}

int main()
{
    // add(10,222);

    // greetings();
    
    return 0;
}

