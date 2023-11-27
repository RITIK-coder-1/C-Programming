#include <stdio.h>

void call(int times){
    // function to print a statement n times
    if (times == 0){
        return;
    }
    printf("Hey\n");

    call(times-1);
}

int main(){
    call(5);
}