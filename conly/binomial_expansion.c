#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int fact(int);

int main()
{
    float x=0.0;
    int p=0;
    int n=0; //precision
    double value=1;
    float f;
    //Series expansions, Binomial Expansion
    // (1+x)^p = 1/0!+ px/1! + (p-1)p x/2! + (p-2)(p-1)p x/3!...
    printf("This program calculates the Binomial Expansion of (1+x)^p where x<<1\n");
    printf("Please enter a number less than 1 for x: ");
    scanf("%g",&x);
    if(x>=1){
        printf("Sorry, x is not less than 1!");
        return 0;
    }

    printf("What is the power p: ");
    scanf("%d",&p);
    if(p==0){
        printf("p cannot be zero!");
        return 0;
    }

    printf("How many iterations would you like: ");
    scanf("%d",&n);
    if(n==0){
        printf("n cannot be zero or negative!");
        return 0;
    }


    for(int i=1; i<=n; i++){
        x=pow(x,i);
        f=fact(i);
        p=fact(p);//p is the factorial of itself
        value=value+(p*(x/f));
    }

    printf("The value of of the Binomial expansion is %g at", value);
    printf(" %d iterations.\n",n);
    return 0;
}

int fact(int num){
    if (num==1){
        return 1;
    }
    else{
    return (num*fact(num-1));
    }
}