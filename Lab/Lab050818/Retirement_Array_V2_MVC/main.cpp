/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 8, 2018, 11:59 AM
 * Purpose: Retirement with arrays and MVC model
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
    const int NYRS=100;     //size of array
    int nYears=50;          //number of years utilized
    float svBegYr[NYRS],inEndYr[NYRS],dpEndYr[NYRS];
    int year [NYRS];

    //Input or initialize values
    salary=1.e5f;   //100,000
    roi=5e-2;       //5%
    savReq=salary/roi;
    percDep=1e-1;   //10%deposit
    nYears=50;      //50 years
    svBegYr[0]=0;      //no savings int $s at start
    inEndYr[0]=0;      //no interest at beginning
    dpEndYr[0]=percDep*salary;//Deposit at the end of every year
    
    //Map/Process/Calculations here
    year[0]=2021;
    int nYear;
    for(nYear=0;nYear<nYears&&savReq>svBegYr[nYear];
            nYear++){ 
        int isvBgYr=(svBegYr[nYear]+inEndYr[nYear]+dpEndYr[nYear])*100;   //calculates in pennies
        year[nYear+1]=year[nYear]+1;
        svBegYr[nYear+1]=isvBgYr/100;    //shifts back to dollars
        dpEndYr[nYear+1]=dpEndYr[nYear];
        inEndYr[nYear+1]=svBegYr[nYear+1]*roi;
    }
    
    //Output the results, hence display
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year      Savings    Interest     Deposit"<<endl;
    for(nYear=0;nYear<nYears&&savReq>svBegYr[nYear];
        nYear++){
        cout<<setw(2)<<nYear
            <<setw(8)<<year[nYear]
            <<setw(12)<<svBegYr[nYear]
            <<setw(11)<<inEndYr[nYear]
            <<setw(15)<<dpEndYr[nYear]<<endl;  
        int isvBgYr=(svBegYr[nYear]+inEndYr[nYear]+dpEndYr[nYear])*100;   //calculates in pennies
  
    }
    //Output the final year
    cout<<"Savings to Retire = $"<<svBegYr[nYear]
          <<" in year "<<year[nYear]<<endl;
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

