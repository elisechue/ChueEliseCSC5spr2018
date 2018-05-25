/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 10, 2018, 11:30 AM
 * Purpose: Retirement with VECTORS and MVC model
 * DOUBLE CHECK WITH CLASS GITHUB
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void retirem(int,float,float, 
             vector<int> &,vector<float> &,vector<float> &,vector<float> &);
void dsplay(int,float, 
             vector<int> &,vector<float> &,vector<float> &,vector<float> &);
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
    vector<float> svBegYr[NYRS],inEndYr[NYRS],dpEndYr[NYRS];
    vector<int> year [NYRS];

    //Input or initialize values
    salary=1.e5f;   //100,000
    roi=5e-2;       //5%
    savReq=salary/roi;
    percDep=1e-1;   //10%deposit
    nYears=50;      //50 years
    svBegYr[0]=0;      //no savings int $s at start
    inEndYr[0]=0;      //no interest at beginning
    dpEndYr[0]=percDep*salary;//Deposit at the end of every year
    year[0]=2021;       //starting year
    
    //Map/Process/Calculations here
    retirem(nYears,savReq,roi,year,svBegYr,dpEndYr,inEndYr);
    
    //Output the results, hence display
    dsplay(nYears,savReq,year,svBegYr,dpEndYr,inEndYr);

    //Exit Program!
    
    return 0;
}

void dsplay(int nYears, float savReq,vector<int> &year,vector<float> &svBegYr,
             vector<float> &dpEndYr,vector<float> &inEndYr){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year      Savings    Interest     Deposit"<<endl;
    int nYear;
    for(nYear=0;nYear<nYears&&savReq>svBegYr[nYear];nYear++){
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
}

void retirem(int nYears, float savReq, float roi,vector<int> &year,vector<float> &svBegYr,
             vector<float> &dpEndYr,vector<float> &inEndYr){
    for(int nYear=0;nYear<nYears&&savReq>svBegYr[nYear];
            nYear++){ 
        int isvBgYr=(svBegYr[nYear]+inEndYr[nYear]+dpEndYr[nYear])*100;   //calculates in pennies
        year[nYear+1]=year[nYear]+1;
        svBegYr[nYear+1]=isvBgYr/100;    //shifts back to dollars
        dpEndYr[nYear+1]=dpEndYr[nYear];
        inEndYr[nYear+1]=svBegYr[nYear+1]*roi;
    }
}

