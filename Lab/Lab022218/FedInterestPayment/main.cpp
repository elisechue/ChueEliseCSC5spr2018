/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 22, 2018, 11:37 AM
 * Purpose:  Calculating Federal Interest Payments
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TRLLN=1e12f;    //Trillion = 10^12
const float BILLN=1e9f;     //Billion = 10^9
const char PERCENT=100;     //conversion to percentage
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float fedDebt,  //Federal Debt in $s
          fedBdgt,  //Federal Budget in $s
          intRate,  //Interest rate on the Debt %/year
          dbtPymt,  //Debt Payment in $s/year
          pctPymt;  //Percentage of Payment/year of the Fed Budget
            
    //Input or initialize values
    fedDebt=20.7*TRLLN;
    fedBdgt=4.1*TRLLN;
    
    //Input the potential interest rate per year
    cout<<"This program calculates the impact of the interest rate "
            <<"rate on the Federal Budget given the current "
            <<"Federal Debt"<<endl;
    cout<<"Input the potential interest rate 1 to 5 percent/year"<<endl;
    cin>>intRate;
    
    //Map/Process/Calculations, Inputs to Outputs
    intRate=intRate/PERCENT;
    dbtPymt=fedDebt*intRate;
    pctPymt=dbtPymt/fedBdgt*PERCENT;
    
    //Display Outputs
    cout<<"Federal Debt         = $ "<<fedDebt/TRLLN<<" Trillion"<<endl;
    cout<<"Federal Budget       = $  "<<fedBdgt/TRLLN<<" Trillion"<<endl;
    cout<<"Interest Rate/year   =    "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Debt Payment         = $"<<dbtPymt/BILLN<<"   Billions/year"<<endl;
    cout<<"Percentage Payment to the Federal Budget = "
            <<pctPymt<<"%"<<endl;
    //Exit Program!
    
    return 0;
}

