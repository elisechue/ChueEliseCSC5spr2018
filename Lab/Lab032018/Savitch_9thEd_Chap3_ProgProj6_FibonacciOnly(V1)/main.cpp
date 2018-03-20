/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 11:45 AM
 * Purpose: Fibonacci Sequence
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
    int fn,fnm1,fnm2;
    
    //Initialize Variables
    fnm2=1;
    fnm1=1;
    
    //Printout first 2 in sequence
    cout<<"Fibonacci Sequence"<<endl;
    cout<<"{"<<fnm2<<","<<fnm1;
    
    //Calculate 3rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //calculate 4th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 5th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //calculate 6th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 7th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //calculate 8th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 9th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn<<"}";
    
    //Display Outputs
   
   
    //Exit Program!
    
    return 0;
}

