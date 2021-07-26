#include <iostream>

using namespace std;

template<class T, int n>

//we use a template function so when we call popStack, it can be any data type
//the int n says how big our class functions will be when called

class STACK
{   
    private: int a[n];
             int counter;
    public: void clearStack(){counter = 0;}
            bool emptyStack(){
                if (counter == 0) return true;
                else return false;
            }
            bool fullStack(){return (counter == n)?true:false;}
            void pushStack(int x){a[counter]=x; counter++;}
            T popStack(){
                    --counter;
                    return a[counter];
            }
};

void message();

int main(){
    STACK<int, 3> s;
    //int a[3]= {5,9,10};
    int a[3] = {};

    message();

    for (int l=0; l<3; l++){
        cin >> a[l];
    }

    cout << "The original array was: ";

    for (int j=0; j<3; j++){
        cout << a[j] << " ";
    }
    cout << endl;

    s.clearStack(); //int new counter=0

    for (int i=0; i<3; ++i){
        s.pushStack(a[i]);
    }

    cout << "The reversed input became: ";

    while(!s.emptyStack()){
        int x = s.popStack();
        cout << x << " ";
    }

    return 0;
}

// the point of a stack is to reverse input

void message(){
    cout << "This program is a stacker, it reverses output of an array"<< endl;
    cout << "Enter three numbers followed by the enter/return key: ";
}