/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 19, 2018, 11:59 AM
 * Purpose: Random Numbers used to approximate PI
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PI=4*atan(1);//Definition of PI
const float MAXRAND=pow(2,31)-1;//2^31-1

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    float apprxPI;  //Approx Value of PI given # of terms in sequence
    int nDarts;     //Number of Darts used in dart game
    int inCrcl;     //Num of darts that landed in circle
    //Input or initialize values
    inCrcl=0;
    nDarts=10000;
    
    //Map/Process/Calculations, Inputs to Outputs
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MAXRAND;
        float y=rand()/MAXRAND;
        if(x*x+y*y<=1)inCrcl++;
    }
    apprxPI=4.0f*inCrcl/nDarts;//approximates PI
    
    //Display Outputs
    cout<<"After "<<nDarts<<" darts,"<<endl;
    cout<<"the approx. value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
            
    //Exit Program!
    
    return 0;
}

