#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#define MAXIMUM 1000 //arbitrary amount of iterations

using namespace std;

void welcomeMessage();//cute message
int randInteger(int, int,int[]);//random number generator
void maxNumFinder(int[]);//how big can the number be?
void minNumFinder(int[]);//how small can it go? will it be just positive integers?

int main(){
    srand(time(NULL));
    int randomNum = 3;
    int counting=1;
    int ourNum;
    int randArray[MAXIMUM];//using this for data checking and analyzing

    welcomeMessage();
    ourNum = randInteger(randomNum,counting, randArray);

    cout << "Your random number is: " << ourNum << endl;

    minNumFinder(randArray);
    maxNumFinder(randArray);

    return 0;
}

void welcomeMessage(){
    std::cout << std::setfill ('-') << std::setw (34) << endl;
    cout << "------Welcome to my program!------" << endl;
    cout << "--This program uses an algorithm--" << endl;
    cout << "-----to make a random number------" << endl;    
    cout << setfill('-') << setw(34) << endl;
}

int randInteger(int x, int count, int array[]){
    //x is our random number

    int anotherR=rand()%10+1;

    do{
        int temp;
        x = count + rand() % 10 + 1;
        if (x <= 100){
            x= x % anotherR;
        }
        else if (x >= 10 && x <=99){//between 10-99 iterations
            x = x * rand() % 10 + 1;
        }
        else if (x >= 100 && x <= 799){
            x = x - rand() % 10 + 1;
            x = x/100;
        }
        else{//800+ iterations
            x = x / anotherR;
            x = count % anotherR;//number stays small
        }
        count++;
        temp = x;//reduces duplicates

        if (temp == x){
            x= temp + rand()%10 + 1;
        }

        //a small portion that will store all values to find the maximum number
        array[(count-1)]= x;

        //cout << x << " ";
    }while(count!=MAXIMUM);

    return x;
}

void minNumFinder(int alpha[]){
    int temp = 10;//make it a big number so it will not default to this number
    for (int i=0; i<MAXIMUM; i++){
        if (temp > alpha[i]){
            temp = alpha[i];
        }
        else if(temp < alpha[i]){
            continue;
        }
        else{
            break;
        }
    }
    cout << "The smallest number is: " << temp << endl;
}

void maxNumFinder(int omega[]){
    int temp = 0;
    for (int i = 0; i<MAXIMUM; i++){
        if (temp<omega[i]){// if the temp number is smaller, than keep the biggest
            temp = omega[i];
        }
        else if(temp>omega[i]){//if the temp number is bigger, keep it and move on
            continue;
        }
        else{//for error checking
            break;
        }
    }
    cout << "The maximum number was: " << temp << endl;
}

//according to our max number generator, 32 is the biggest value, so we can modify it
//to get more spaced out values and improve our rand number generator