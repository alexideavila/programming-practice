#include <stdio.h>
#define MAXARRAY 100 //not the best but will do

int main(){
    int x=0; //actual array counter
    char userInput[MAXARRAY]; //declare a dummy size for an array
    
    printf("This is program that will read a string, print it and say how long it was\n");
    printf("Please write a message and it end it with a period: ");
    
    //this while loop will read in the input of user
    //then x will take the actual count of the array
    //the condition is that it is a char
    while(scanf("%c", &userInput[x]) && userInput[x]!='.'){ //use a period to end the while loop
        x++;
    }

    //now we have to compensate for the period
    x--;
    
    printf("Your message is: ");

    //this will print our char array out
    for(int i=0; i<=x; i++){
        printf("%c",userInput[i]);
    }
    printf("\n");
    printf("It has %d letters\n", x);
    printf("See ya!");

    return 0;
}