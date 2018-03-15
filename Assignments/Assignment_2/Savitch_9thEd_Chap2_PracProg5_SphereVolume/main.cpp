/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created March 12, 2018, 2:57 PM
 * Purpose:  calculate the volume of a sphere given the radius
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PI=3.1415;  //Pi to the nearest ten thousandth
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float radius,   //user will input radius in inches
          volsphe;  //volume of a sphere
    //Input or initialize values
    
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"This program can compute the volume of a sphere given the radius."
            <<endl;
    cout<<"Enter the radius of a sphere (in inches):"<<endl;
    cin>>radius;
    volsphe=(4.0/3.0)*PI*(radius*radius*radius);
      
    //Display Outputs
      cout<<"The volume of the sphere is: "<<volsphe<<" inches cubed."<<endl;
      
    //Exit Program!
    
    return 0;
}

