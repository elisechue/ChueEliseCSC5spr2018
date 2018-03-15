/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 6, 2018, 10:38 AM
 * Purpose:  Calculating Paycheck given possible overtime and
 *           taxes and dues
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
    float   payRate=16.78f,     //pay in us dollars
            hrsWrkd,            //hours worked
            regPay,             //Pay without overtime
            otPay,              //isolated overtime pay
            grsPay,             //pay before dues
            fedTax=0.14f,       //federal tax is 14%
            statTax=0.05f,      //state tax is 5%
            ssTax=0.06f,        //social security is 6%
            hlthIns,
            uDues=10.0f;
    int     numDep;
    float   netPay;
            
    //Input or initialize values
    cout<<"This program is designed to calculate your weekly paycheck"<<endl;
    cout<<"Input number of hours worked this week:"<<endl;
    cin>>hrsWrkd;
    cout<<"Input number of dependents:"<<endl;
    cin>>numDep;
    
    //Map/Process/Calculations, Inputs to Outputs
    regPay=hrsWrkd*payRate;
    otPay=regPay>40?(hrsWrkd-40)*payRate/2:0;
    grsPay=regPay+otPay;
    cout<<"If you have "<<numDep<<" dependents and"<<endl;
    cout<<"If you worked "<<hrsWrkd<<", your gross Pay is      $"<<grsPay<<endl;
    
    //fedTax*grsPay;
    //statTax*grsPay;
    //ssTax*grsPay;
    hlthIns=numDep>=3?35:0;
    cout<<"Amount withheld for Federal Tax is:      $"<<fedTax*grsPay<<endl;
    cout<<"Amount withheld for State Tax is:        $"<<statTax*grsPay<<endl;
    cout<<"Amount withheld for Social Security is:  $"<<ssTax*grsPay<<endl;
    cout<<"Amount withheld for Health Insurance is: $"<<hlthIns<<endl;
    cout<<"Amount withheld for Union Dues is:       $"<<uDues<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
            
    netPay=grsPay-(fedTax*=grsPay)-(statTax*=grsPay)-(ssTax*=grsPay)-uDues-hlthIns;
    
  
    //Display Outputs
    cout<<"Your Net Pay is:                         $"<<netPay<<endl;
    //Exit Program!
    
    return 0;
}

