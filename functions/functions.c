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

void table (){
    int number;
    printf("Enter any number to get its first 10 multiples: ");
    scanf("%d", &number);
    for(int i = 1; i <= 10; i++){
        int product = number * i;
        printf("%d\n", product);
    }
}
int main()
{
    // add(10,222);

    // greetings();
    
    // table();
    
    return 0;
}

