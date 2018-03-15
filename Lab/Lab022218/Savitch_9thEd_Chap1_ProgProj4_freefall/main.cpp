/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 22, 2018, 12:17 PM
 * Purpose:  Calculate distance of object in Free Fall assuming no drag
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float GRAVITY=32.174; //in feet/sec^2

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float d,  //distance in feet
              //float a - would have been for acceleration
          t; //time in seconds
            
    //Input or initialize values   
    //a in this case would have been GRAVITY
    cout<<"Input the amount of time object was falling (in seconds)"
          <<endl;
    cin>>t;
    d=(GRAVITY*(t*t))/2;
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs
            cout<<"The distance the object fell is "<<d<<" feet"<<endl;
    //Exit Program!
    
    return 0;
}

