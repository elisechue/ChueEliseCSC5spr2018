/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 19, 2018, 11:34 AM
 * Purpose: Sequence representing PI
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PI=4*atan(1);//Definition of PI

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float apprxPI;  //Approx Value of PI given # of terms in sequence
    int nTerms;     //Number of terms used in sequence
    
    //Input or initialize values
    apprxPI=0;
    nTerms=10000;
    
    //Map/Process/Calculations, Inputs to Outputs
    for(int sign=-1,term=1,cntr=1;term<=nTerms;term++,cntr+=2){
        sign*=-1;   //flip the sign from positive to negative and so on
        apprxPI+=(static_cast<float>(sign)/cntr);//atan(1)
    }
    apprxPI*=4;//approximates PI
    
    //Display Outputs
    cout<<"After "<<nTerms<<" terms,"<<endl;
    cout<<"the approx. value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
            
    //Exit Program!
    
    return 0;
}

