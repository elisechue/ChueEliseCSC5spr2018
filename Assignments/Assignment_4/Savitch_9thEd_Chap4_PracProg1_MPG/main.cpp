/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 1, 2018, 1:27 PM
 * Purpose: Convert Liters to Gallons and vice versa
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float LTRTOGAL=0.2641f;   //1 liter is /that/ gallons

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float mi,     //miles input
          gasL,   //gas consumed in liters
          MPG;    //miles per gallon
    char rep;   //repeat
    //Input or initialize values
    do{
    cout<<"Input the amount of gas consumed by your car (in Liters)"<<endl;
    cin>>gasL;
    cout<<"Input how many miles traveled"<<endl;
    cin>>mi;
    
    //Map/Process/Calculations, Inputs to Outputs
    MPG=mi/(LTRTOGAL*gasL);
    
    //Display Outputs
    cout<<"Your car is getting "<<MPG<<" mpg."<<endl;
    cout<<"Would you like to repeat the program? Y/N"<<endl;
    cin>>rep;
    }while (rep=='y'||rep=='Y');
    
    //Exit Program!
    
    return 0;
}

