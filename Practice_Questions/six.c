// Multiplication Table ---->

#include <stdio.h>

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

int main ()
{
    table();
}