/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 24, 2018, 11:25 AM
 * Purpose: initial savings function
 */

//System Libraries Here
#include <iostream> //i/o library
#include <cmath>    //math library
#include <iomanip>  //formatting library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVPERC=1e2f;   //conversion to percent

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
float fval1(float,float,int);//Future value w/ power function
float fval2(float,float,int);//Future value w log/exponential function
float fval3(float,float,int);//Future value w for-loop function
float fval4(float,float,int);//Future value by recursion function

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float presVal,  //Present VAlue in $s
          intRate;  //Interest rate in %
    int   numCmp;   //Number of compounding periods in years  
            
    //Input or initialize values
    presVal=1e2f;//$100's
    intRate=6;  //6%
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<presVal<<endl;
    cout<<"Interest Rate = "<<intRate<<"%"<<endl;
    cout<<"Number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Savings using FV -> Power     = $"
            <<fval1(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Log/Exp   = $"
            <<fval2(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> For-Loop  = $"
            <<fval3(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> recursion = $"
            <<fval4(presVal,intRate/CNVPERC,numCmp)<<endl;
    //Exit Program!
    
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                             Future Value Functions
//Inputs:
//  pv -> present value in $s
//  ir -> interest rate in decimal value
//  n  -> number of compounding periods (yrs)
//Outputs:
//  fv -> future value in $s
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float fval1(float pv,float ir,int n){                   //FV w/ power function
    return pv*pow((1+ir),n);
}

float fval2(float pv,float ir,int n){            //FV log/exponential function
    return pv*exp(n*log(1+ir));
}

float fval3(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}

float fval4(float pv,float ir,int n){
    if(n<=0)return pv;
    return fval4(pv,ir,n-1)*(1+ir);
}


