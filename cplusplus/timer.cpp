//Main Author: Alexi De Avila Cadena
//Title: Timing the LEES Experiment
//
//Modified by: Ronald Pocoroba
//

#include<iostream>
#include<iomanip>
#define BINS 10 //seconds
#define FLAG 8 //seconds
#define DBL 2 //this takes into account the 2 runs per single scan, RP
using namespace std;

void welcomeMessage(); //a greeting
float timerFun(int,int); //the function being used

int main(){
    //100 bins is 10 sec so 10 bins is one sec
    //100 bins is one scan

    int cycles; 
    int scans[3];
    float scanTime[3];//how long it takes for each run
    float total=0; //dummy variable to keep total time
    welcomeMessage();

    cout << "How many scans do you have of 5, 10, 15? (Use an Enter key for each value)" << endl;
    for(int i=0; i<3; i++){
        cin >> scans[i];
    }
    //scan[0] = how many 5 scans
    //scan[1] = how many 10 scans
    //scan[2] = how many 15 scans

    cout << "How many cycles do you have?" << endl;
    cin >> cycles;

    //the scan time
    for(int k=0; k<3; k++){
        int temp = scans[k];
        scanTime[k] = timerFun(temp, cycles);// this is for all scans
    }

    //how many scans in total; 5, 10, 15 amount
    for(int d=0; d<3; d++){
        total += scanTime[d];
    }

    cout << "It will take ";
    cout << fixed << showpoint << setprecision(2);
    cout << ((total)/60.0) << " minutes" << endl;
    cout << "or " << ((total)/3600) << " hours" << endl;
    cout << "Thank you for using this program! Bye!" << endl;
    
    return 0;
}

void welcomeMessage(){
    cout << "This is a program that calculates the time it" << endl;
    cout << "takes for a run of a molecule/atom will take " << endl;
    cout << "in LabVIEW" << endl;
}

float timerFun(int x, int y){
    return ((BINS*x*DBL*y)+(FLAG))*x; // (10 bins/sec * scans * 2 runs * cycles + time for flag) * num of angles
}

//((10*bins))=time for 1 scan (time*scans*cycles)+(cycles*angles*8seconds), RP


