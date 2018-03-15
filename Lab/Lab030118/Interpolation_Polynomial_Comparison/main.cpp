/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 1, 2018, 11:24 AM
 * Purpose: Random Number Test with a comparison
 *          of interpolation to a first order polynomial
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //random number generator
#include <ctime>    //time to seed random num generator
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //seed random num generator once, here only
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    unsigned char f1=32,f2=212,c1=0,c2=100; //table values for temperature
    float m=5.0f/9.0f, b=-32.0f; //polynomial coefficients
    float ceq,cint,f;//temperature values and conversions
  
    //Input or initialize values
    f=rand()%181+32;//[32,212]
    
    //Map/Process/Calculations, Inputs to Outputs
    ceq=m*(f+b);
    cint=c1+static_cast<float>(c2-c1)/(f2-f1)*(f-f1);
    
    //Display Outputs
    cout<<f<<" Fahrenheit = "
            <<ceq<<" Centigrade equation "
            <<cint<<" Celsius interpolation"<<endl;
    
    //Exit Program!
    
    return 0;
}

