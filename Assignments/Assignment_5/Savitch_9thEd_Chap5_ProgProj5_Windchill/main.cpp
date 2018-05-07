/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 5, 2018, 6:50 PM
 * Purpose: Calculate Windchill Factor in North America 
 * (modified to use the United States units)
 * Taken from the National Weather Service:
 * Windchill Temperature is only defined for temperatures 
 * at or below 50 degrees F and wind speeds above 3 mph. 
 * Bright sunshine may increase the wind chill temperature by 10 to 18 deg F.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>    //math library to use pow function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
float wChill(float, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float v,    //wind speed in mph
          t;    //temperature in Fahrenheit 
    
    //Input or initialize values
    cout<<"This program calculates the Windchill Index of North America"<<endl;
    cout<<"Input the wind speed (in mph) and the temperature (in F)"<<endl;
    cin>>v>>t;
    if(t>50){
        cout<<"Temperature N/A"<<endl;return 0;
    }
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The windchill is "<<wChill(v,t)<<" degrees F"<<endl;
    
    //Exit Program!

    return 0;
}
//******************************************************************************
//                            FUNCTIONS HERE
//******************************************************************************
float wChill(float v, float t){
    return 35.74+0.6215*t-35.75*(pow(v,0.16))+0.4275*t*(pow(v,0.16));
}