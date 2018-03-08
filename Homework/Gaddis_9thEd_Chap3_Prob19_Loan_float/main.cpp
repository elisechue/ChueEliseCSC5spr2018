/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 8, 2018, 9:51 AM
 * Purpose: Calculate monthly payments and interest on a loan
 */

//System Libraries Here
#include <iostream>
#include <cmath>    //for the power function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const char MNYR=12;  //months in a year
const char PERCENT=100;//conversion to 100
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float   loan=1e4f,   //initial loan amount is $10,000
            intRate=12.0f, //interest rate a year=12%    
            mnthPay,     //monthly payment
            totAmt,     //total amount paid
            totInt;     //total interest paid
    float  months=36; //number of months
            
    //Input or initialize values
    intRate/=(MNYR*PERCENT);
    float temp=pow(1+intRate,months);
    mnthPay=(intRate*temp*loan)/(temp-1);
    int pennies=static_cast<int>((mnthPay+0.005)*100);
    mnthPay=pennies/100.0f; //convert back to dollars
    totAmt=months*mnthPay;
    totInt=totAmt-loan;
    
    //Map/Process/Calculations, Inputs to Outputs
    cout<<"Loan Amount                       = $"<<loan<<endl;
    cout<<"Interest Rate      "<<intRate<<"% per month"<<endl;
    cout<<"The number of payments to make is: "<<months<<endl;
    cout<<"Monthly Payment                 = "<<mnthPay<<endl;
    cout<<"Total Amount Paid for Loan      = $"<<totAmt<<endl;
    cout<<"Total Interest Paid             = $"<<totInt<<endl;
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

