/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 5, 2018, 1:23 PM
 * Purpose:  Convert feet and inches to meters and centimeters
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
void inpFtIn();
float ftTOm(float);
float inTOcm(float);
void outpMCm(float, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float ft, in;   //feet, inches
    char loop;      //user inputs y/n to repeat program
    //TESTERS float met, cm;  //meters, centimeters
    do{
        //Input or initialize values
        inpFtIn();          //calls for the input function
        cin>>ft>>in;

        //Map/Process/Calculations, Inputs to Outputs

        //Display Outputs
        outpMCm(ft,in);     //calls output function and passes input through
        cout<<"Would you like to run program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
    return 0;
}
//******************************************************************************
//                      FUNCTIONS HERE
void inpFtIn(){
    cout<<"This program converts feet and inches to meters and centimeters"
            <<endl;
    cout<<"Input feet and inches"<<endl;
}

float ftTOm(float ft){
    return ft*MTOFT;   //meter conversion
}

float inTOcm(float in){
    return (in/INTOFT)*MTOFT*CMTOM;   //inches to feet to meters to centimeters
}

void outpMCm(float ft, float in){
    cout<<"You input "<<ft<<" ft and "<<in<<" in."<<endl;
    cout<<"This converts to "<<ftTOm(ft)<<" m and "<<inTOcm(in)<<" cm"<<endl;
}
