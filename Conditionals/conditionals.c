#include <stdio.h>

int main(){
    int num = -10;

    // else if ---->

    if (num == 0){
        printf("Zero\n");
    } else if (num > 0){
        printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    // nested if ---->
    if (num == 0){
        // printf("Zero\n");
    } else {
        if (num > 0){
            // printf("Positive\n");
        } else {
            // printf("Negative\n");
        }
    }
    return 0;
}