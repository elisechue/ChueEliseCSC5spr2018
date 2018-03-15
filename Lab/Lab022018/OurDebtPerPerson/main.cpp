/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 20, 2018, 11:47 AM
 * Purpose:  Calculating personal debt in USA
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float MLLN=1e6f;   //Million
const float TRLLN=1e12f;  //Trillion
const int PRCNT=100;        //Conversion for percent

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float fedDt08,  //Federal Debt in 2008
          fedDt18,  //Federal Debt in 2018
          usPop08,  //US population in 2008
          usPop18,  //US population in 2018
          pcntInc;  //The percent increase in Overall Debt between 2008 and 2018
            
    //Input or initialize values
    fedDt08=9.9*TRLLN;
    usPop08=304*MLLN;
    fedDt18=20.7*TRLLN;
    usPop18=326*MLLN;
    
    //Map/Process/Calculations, Inputs to Outputs
    pcntInc=((fedDt18-fedDt08)/fedDt08*100);
    
    //Display Outputs
    cout<<"The Federal Debt per Person in 2008 was $ "<<fedDt08/usPop08<<endl;
    cout<<"The Federal Debt per Person in 2018 was $ "<<fedDt18/usPop18<<endl;
    cout<<"The % increase in Federal Debt in those 10 years is "<<pcntInc<<"%"<<endl;
    
    //Exit Program!
    
    return 0;
}

