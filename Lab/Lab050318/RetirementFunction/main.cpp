/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 3, 2018, 11:20 AM
 * Purpose:  Calculate Retirement logistics
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
    //Declare all Variables, no doubles
        //Initial Conditions
    float salary,   //Salary in $/year
            roi,    //return on invest in %
            savReq, //savings required in $
            percDep;//percentage deposit in %
    //Number of Years, Savings at beg of year, Interest earned at end of yr
    //deposit at end of year
    int nYears;
    float svBegYr,inEndYr,dpEndYr;
    
    //Input or initialize values
    salary=1.e5f;   //100,000
    roi=5e-2;       //5%
    savReq=salary/roi;
    percDep=1e-1;   //10%deposit
    nYears=50;      //50 years
    svBegYr=0;      //no savings int $s at start
    inEndYr=0;      //no interest at beginning
    dpEndYr=percDep*salary;//Deposit at the end of every year
    
    //Map/Process/Calculations, Inputs to Outputs
    int year=2021;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year      Savings    Interest     Deposit"<<endl;
    for(int nYear=0;nYear<nYears&&savReq>svBegYr;year++,nYear++){
        cout<<setw(2)<<nYear
            <<setw(8)<<year
            <<setw(12)<<svBegYr
            <<setw(11)<<inEndYr
            <<setw(15)<<dpEndYr<<endl;  
        int isvBgYr=(svBegYr+inEndYr+dpEndYr)*100;     //calculates in pennies
        svBegYr=isvBgYr/100;    //shifts back to dollars
        inEndYr=svBegYr*roi;
    }
    cout<<"Savings to Retire = $"<<svBegYr
            <<" in year "<<year<<endl;
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

