/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 29, 2018, 11:51 AM
 * Purpose:  my attraction to earth
 */

//System Libraries Here
#include <iostream> //I/O Library - > cout, endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand function
#include <ctime>    //time to set seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float GRAVITY=6.673e-8f;  //cm^3/g/sec^2
const float CMMETER=0.01f;      //cm to meters
const float METERFT=3.281f;      //meters to ft
const float LBSSLUG=32.174f;    //slugs to pound
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) { 
   //Declare Variables 
    float myMass, 
          myWt,
          myWtCnv,  //weight converted
          massEa,   //mass of Earth in grams
          rEarth;   //radius of earth
    
   //Input or initialize values
    myMass=6;//6slugs
    myWtCnv=myMass*LBSSLUG;
    massEa=5.972e27f;//grams
    rEarth=6.371e6f;//meters
   //Calculate the answer
    myWt=GRAVITY*CMMETER*CMMETER*CMMETER*myMass*massEa*METERFT
            /(rEarth*rEarth);
            
   //Output my Weight
    cout<<fixed<<setprecision(0);//we shouldnt output more than 3 sig figs
                                 //depending on the scenarios
                                 //ie diff in actual distance depending on where
                                 //you are on earth in this case
   cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
   cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
   //display outputs
  
   //Exit Program!
    
    return 0;
}

