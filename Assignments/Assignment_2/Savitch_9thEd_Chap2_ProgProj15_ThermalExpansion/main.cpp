/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 12, 4:50 PM
 * Purpose: calculates linear displacement of thermal expansion of materials
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float alpha,    //a material's linear thermal expansion coefficient
            initL,  //initial length of the material in meters
            deltaT, //change in temperature in celcius
             deltaL; //change in linear expansion
    
    //Input or initialize values
    cout<<"Input the material's linear thermal expansion coefficient"<<endl;
    cin>>alpha;
    cout<<"Input the material's initial length (in meters)"<<endl;
    cin>>initL;
    cout<<"Input the change in temperature (in degrees Celsius)"<<endl;
    cin>>deltaT;
  
    //Map/Process/Calculations, Inputs to Outputs
     deltaL=alpha*initL*deltaT;
    
    //Display Outputs
     if (deltaL>=0)
         cout<<"The material will EXPAND by "<<deltaL<<" meters."<<endl;
     else cout<<"The material will SHRINK by "<<deltaL*-1<<" meters."<<endl;
     
    //Exit Program!
    
    return 0;
}

