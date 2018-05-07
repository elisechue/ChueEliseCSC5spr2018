/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 6, 2018, 10:23 PM
 * Purpose:  Convert feet and inches to meters and centimeters
 * or convert meters and centimeters to feet and inches Users choice!
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
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

void inpMCm();          //input meters and cm
float mTOft(float);
float cmTOin(float);
void outFtIn(float, float);//output ft and in

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float ft, in, met, cm;   //feet, inches, meters, centimeters
    char loop, choose;      //user inputs y/n to repeat program 
                            // choose which conversion
    //TESTERS float met, cm;  //meters, centimeters
    do{
        //Input or initialize values
        cout<<"Convert (1) FT & IN -> M & CM"<<endl;
        cout<<"or      (2) M & CM  -> FT & IN?"<<endl;
        cin>>choose;
        //Map/Process/Calculations, Inputs to Outputs
        if(choose=='1'){
            inpFtIn();
            cin>>ft>>in;
            outpMCm(ft,in);
        }else if (choose=='2'){
            inpMCm();
            cin>>met>>cm;
            outFtIn(met,cm);
        }
        //Display Outputs
        
        cout<<"Would you like to run program again? Y/N"<<endl;
        cin>>loop;
        //Exit Program!
    }while (loop=='y'||loop=='Y');
    return 0;
}
//******************************************************************************
//                        FUNCTIONS GO HERE
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

//METERS AND CM TO FEET AND INCHES
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
