#include <stdio.h>

int main(){

    int option=0;

    printf("Welcome to this strange program!\n");
    printf("Enter a number between 0-9 for a random event: ");

    scanf("%d", &option);

    switch(option){
        case 0:
            printf("The easiest option huh!\n");
            break;
        case 1:
            printf("Is the 2nd iteration? Or first?\n");
            break;
        case 2:
            printf("This number/option is considered a prime number, cool huh?\n");
            break;
        case 3:
            printf("This number multiplied by itself is not a prime number!\n");
            break;
        case 4:
            printf("All these options and nothing to do lol\n");
            break;
        default:
            printf("I got too lazy to put the other options, thank you!\n");
    }

    return 0;
}