/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 8, 2018, 12:35 PM
 * Purpose:  Calculate employee raise in retroactive pay and how much they would
              make for any given amount of months
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float MNYR=12.0f;    //months in a year 

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    const float raise=0.076f; //book says to declare the pay raise as a const
    float curSal,       //Annual Salary before raise
          retPayT,    //retroactive paid time in months
          retOwed,      //retroactive pay owed
          nSalYr,       //New Annual salary
          nSalMn;       //New Monthly salary  
    
    //Input or initialize values
    cout<<"Congratulations! You have won a 7.6% Pay Raise!"<<endl;
    cout<<"This program will calculate your retroactive pay from "<<
            " however many months you are owed"<<
            "(raise included) and your new salary."<<endl;
    cout<<"Enter how many months of back pay you are owed"<<endl;
    cin>>retPayT;
    cout<<"Enter your current salary"<<endl;
    cin>>curSal;
    
    //Map/Process/Calculations, Inputs to Outputs
    retOwed=curSal/MNYR*retPayT*raise;
    nSalYr=curSal+(curSal*raise);
    nSalMn=nSalYr/MNYR;
    
    //Display Outputs
    cout<<"You are owed $"<<retOwed<<" in retroactive pay"<<endl;
    cout<<"Your new salary is $"<<nSalYr<<"/year"<<endl;
    cout<<"That translates to $"<<nSalMn<<"/month"<<endl;
    
    //Exit Program!
    
    return 0;
}

