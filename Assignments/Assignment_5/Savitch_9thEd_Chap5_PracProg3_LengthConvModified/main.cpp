/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 5, 2018, 1:57 PM
 * Purpose:  Convert meters and cm to ft and in
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float MTOFT=0.3048; //convert meters to feet according to book
const float CMTOM=100;      //centimeter to meter
const float INTOFT=12;      //inches to feet

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void inpMCm();          //input meters and cm
float mTOft(float);
float cmTOin(float);
void outFtIn(float, float);//output ft and in

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float met, cm;   //meters, centimeters
    float in,ft;        
    char loop;      //user inputs y/n to repeat program
    do{
        //Input or initialize values
        inpMCm();          //calls for the input function
        cin>>met>>cm;

        //Map/Process/Calculations, Inputs to Outputs

        //Display Outputs
        outFtIn(met,cm);     //calls output function and passes input through
        cout<<"Would you like to run program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
    return 0;
}
//******************************************************************************
//                      FUNCTIONS HERE
void inpMCm(){
    cout<<"This program converts meters and centimeters to feet and inches"
            <<endl;
    cout<<"Input meters and centimeters"<<endl;
}

float mTOft(float met){
    return met/MTOFT;   //ft to meter conversion
}

float cmTOin(float cm){
    return cm/CMTOM/MTOFT*INTOFT;   //cm to m to ft to in
}

void outFtIn(float met, float cm){
    cout<<"You input "<<met<<" m and "<<cm<<" cm."<<endl;
    cout<<"This converts to "<<mTOft(met)<<" ft and "<<cmTOin(cm)<<" in"<<endl;
}
