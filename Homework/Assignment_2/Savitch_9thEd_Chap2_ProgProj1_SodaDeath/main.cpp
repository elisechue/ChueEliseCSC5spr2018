/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 6, 2018, 12:10 PM
 * Purpose:  calculate how much soda in a single sitting would kill a person
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float LBTOGRM=454.0f;//pounds to grams conversion
const float DAYSYR=365.0f;//Days per year

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
float mMouse=35.0f, //Mass of the mouse in grams
      mKllM=5.0f,   //Mass in sweetener to kill the mouse
      mSoda=350.f,  //mass of soda in grams
      sodaCnc=.001f,//soda concentration of sweetener
      wtDtr;        //Weight of Dieter in lbs
unsigned int  numCans,      //number of cans to drink before death 
              cansCon,      //number of cans consumed  
              cansDay,      //Cans per day
              numYrs;       //Number of years consuming soda

        //Input or initialize values
cout<<"This program calculates soda can consumption permitted"<<endl;
cout<<"Input your final desired weight in lbs after diet soda consumption"<<endl;
cin>>wtDtr;
cout<<"Input how many cans you drink per day"<<endl;
cin>>cansDay;
cout<<"Input how many years you have drank this soda"<<endl;
cin>>numYrs;

    //Map/Process/Calculations, Inputs to Outputs
numCans=mKllM*wtDtr*LBTOGRM/(mMouse*mSoda*sodaCnc);
cansCon=cansDay*DAYSYR*numYrs;

    //Display Outputs
cout<<"The weight of the Dieter after soda consumption = "<<wtDtr<<endl;
cout<<"Maximum cans of soda allowed to consume = "<<numCans-1<<endl;
cout<<"Total cans of soda consumed so far = "<<cansCon<<endl;
cout<<(cansCon<numCans?"You're alive":"How are you still alive?")<<endl;

    //Exit Program!
    
    return 0;
}

