#include <stdio.h>

int main(){
    // For loop ---->

    for (int i = 10; i <= 20; i++)
    {
        // printf("%d\n", i);
    }

    // While loop --->
    int num = 0;
    while (num < 20)
    {
        // printf("%d\n", num);
        num++;
    }

    // break --->
    for (int i = 0; i <=20; i++){
        if (i == 5){
            // printf("5 has been detected\n");
            break;
        }

        // printf("%d\n", i);
    }    

    // continue -->

    for (int i = 0; i <=20; i++){
        if (i == 5){
            // printf("5 has been detected\n");
            continue;
        }

        // printf("%d\n", i);
    }

    return 0;
}