/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 11:59 AM
 * Purpose: Fibonacci feat. Green Crud population
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int fn,fnm1,fnm2, 
        intCrud,days;
    
    //Initialize Variables
    fnm2=1;     //f(subscript n) - 2
    fnm1=1;     //f(subscript n) - 1
    intCrud=10;
    days=0;
    
    //Printout first 2 in sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of Crud"<<endl;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //Calculate 3rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //calculate 4th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //Calculate 5th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //calculate 6th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //Calculate 7th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //calculate 8th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
            
    //Calculate 9th element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
            cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm1*intCrud
            <<" lbs of Crud"<<endl;
    
    //Display Outputs
   
   
    //Exit Program!
    
    return 0;
}
