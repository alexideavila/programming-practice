#include <iostream>
#include <string.h>
using namespace std;

void messageOutput(int, float);

int main(){
    //A basic calculator
    int option;
    string message = "Choose two numbers to use: ";
    float a,b;
    float result;
    cout << "This is a basic calculator, choose the options below to get started" << endl;
    cout << "1 for addition, 2 for subtraction, 3 for division, 4 for multiplication"<< endl;
    cin >> option;

    if (option == 1){ //addition
        cout << message;
        cin >> a >> b;
        result = a+b;
        messageOutput(option, result);
    }
    else if (option == 2){
        cout << message;
        cin >> a >> b;
        result = a - b;
        messageOutput(option, result);
    }
   else if (option == 3){
        cout << message;
        cin >> a >> b;
        result = a / b;
        messageOutput(option, result);
    }
    else if (option == 4){
        cout << message;
        cin >> a >> b;
        result = a * b;
        messageOutput(option, result);
    }
    else{
        cout << "Invalid option!" << endl;
    }
    return 0;
}

void messageOutput(int x, float math){
    if (x==1){
        cout << "Your addition is: " << math << endl;
    }
    else if (x==2){
        cout << "Your difference is: " << math << endl;
    }
    else if (x==3){
        cout << "Your division is: " << math << endl;
    }
    else if (x==4){
        cout << "Your product is: " << math << endl;
    }
    else{
        cout << "Error in processing function" << endl;
    }
}
