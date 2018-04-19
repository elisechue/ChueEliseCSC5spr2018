/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 19, 2018, 11:28 AM
 * Purpose: Calculate a factorial
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
    int n,fctrl;
    
    //Input or initialize values
    fctrl=1;
    n=6;
    
    //Map/Process/Calculations, Inputs to Outputs
    for(int i=1;i<=n;i++){
        fctrl*=i;
    }
    
    //Display Outputs
    cout<<n<<"! = "<<fctrl<<endl;
    //Exit Program!
    
    return 0;
}

