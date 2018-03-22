/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 22, 2018, 11:22 AM
 * Purpose: Determine greater or less than loop
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
   //Declare Variables
    float x,y;
    string relate;
    
    //Initialize Variables
    x=4;
    y=3;
   
    //Calculate
    relate=x<y?" < ":
           x>y?" > ":
               " = ";
    
    //Display Outputs
    cout<<x<<relate<<y<<endl;
    
    //Exit Program!
    
    return 0;
}

